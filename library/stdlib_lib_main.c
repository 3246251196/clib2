/*
 * $Id: stdlib_lib_main.c,v 1.2 2006-01-08 12:04:25 obarthel Exp $
 *
 * :ts=4
 *
 * Portable ISO 'C' (1994) runtime library for the Amiga computer
 * Copyright (c) 2002-2015 by Olaf Barthel <obarthel (at) gmx.net>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *   - Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *
 *   - Neither the name of Olaf Barthel nor the names of contributors
 *     may be used to endorse or promote products derived from this
 *     software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#if defined(__THREAD_SAFE)

/****************************************************************************/

#ifndef EXEC_EXECBASE_H
#include <exec/execbase.h>
#endif /* EXEC_EXECBASE_H */

/****************************************************************************/

#include <setjmp.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/****************************************************************************/

#ifndef _STDLIB_HEADERS_H
#include "stdlib_headers.h"
#endif /* _STDLIB_HEADERS_H */

#ifndef _STDIO_HEADERS_H
#include "stdio_headers.h"
#endif /* _STDIO_HEADERS_H */

#include <proto/dos.h>

/****************************************************************************/
extern struct Library NOCOMMON *__ElfBase;
extern struct ElfIFace NOCOMMON *__IElf;

STATIC BOOL lib_init_successful;
extern int _start(char *args, int arglen, struct ExecBase *sysBase);

/****************************************************************************/

STATIC BOOL
open_libraries(struct Library *sys_base)
{
	BOOL success = FALSE;

	SysBase = sys_base;

	/* Get exec interface */
	IExec = (struct ExecIFace *)((struct ExecBase *)SysBase)->MainInterface;

	/* Open the minimum required libraries. */
	DOSBase = (struct Library *)OpenLibrary("dos.library", 54);
	if (DOSBase == NULL)
		goto out;

	__UtilityBase = OpenLibrary("utility.library", 54);
	if (__UtilityBase == NULL)
		goto out;

	/* Obtain the interfaces for these libraries. */
	IDOS = (struct DOSIFace *)GetInterface(DOSBase, "main", 1, 0);
	if (IDOS == NULL)
		goto out;

	__IUtility = (struct UtilityIFace *)GetInterface(__UtilityBase, "main", 1, 0);
	if (__IUtility == NULL)
		goto out;

	/* We need elf.library V52.2 or higher. */
	__ElfBase = OpenLibrary("elf.library", 0);
	if (__ElfBase == NULL || (__ElfBase->lib_Version < 52) || (__ElfBase->lib_Version == 52 && __ElfBase->lib_Revision < 2))
		goto out;

	__IElf = (struct ElfIFace *)GetInterface(__ElfBase, "main", 1, NULL);
	if (__IElf == NULL)
		goto out;
	Printf("__IElf from stdlib_lib_main = %ld\n", __IElf);
	success = TRUE;

out:

	return (success);
}

/****************************************************************************/

STATIC VOID
close_libraries(VOID)
{
	if (__IUtility != NULL)
	{
		DropInterface((struct Interface *)__IUtility);
		__IUtility = NULL;
	}

	if (IDOS != NULL)
	{
		DropInterface((struct Interface *)IDOS);
		IDOS = NULL;
	}

	if (__UtilityBase != NULL)
	{
		CloseLibrary(__UtilityBase);
		__UtilityBase = NULL;
	}

	if (DOSBase != NULL)
	{
		CloseLibrary(DOSBase);
		DOSBase = NULL;
	}

	if (__IElf != NULL)
	{
		DropInterface((struct Interface *)__IElf);
		__IElf = NULL;
	}

	if (__ElfBase != NULL)
	{
		CloseLibrary(__ElfBase);
		__ElfBase = NULL;
	}
}

/****************************************************************************/

VOID
__lib_exit(VOID)
{
	ENTER();

	if (lib_init_successful)
	{
		/* Enable exit() again. */
		__exit_blocked = FALSE;

		/* If one of the destructors drops into exit(), either directly
		   or through a failed assert() call, processing will resume with
		   the next following destructor. */
		(void)setjmp(__exit_jmp_buf);

		/* Go through the destructor list */
		_clib_exit();

		close_libraries();

		lib_init_successful = FALSE;
	}

	LEAVE();
}

/****************************************************************************/

BOOL __lib_init(struct Library *sys_base)
{
	volatile int result = FALSE;

	ENTER();

	/* Make sure that no requesters and such pop up if anything
	   goes wrong during initialization. */
	__lib_startup = TRUE;

	/* Open dos.library and utility.library. */
	if (CANNOT open_libraries(sys_base))
		goto out;

	/* This plants the return buffer for _exit(). */
	if (setjmp(__exit_jmp_buf) != 0)
	{
		SHOWMSG("invoking the destructors");

		/* If one of the destructors drops into exit(), either directly
		   or through a failed assert() call, processing will resume with
		   the next following destructor. */
		(void)setjmp(__exit_jmp_buf);

		/* Go through the destructor list */
		_clib_exit();

		goto out;
	}

	SHOWMSG("now invoking the constructors");

	/* Go through the constructor list */
	_start(NULL, 0, sys_base);

	/* Disable exit() and its kin. */
	__exit_blocked = TRUE;

	/* Remember this so that __lib_exit() will know what to do. */
	lib_init_successful = TRUE;

	result = TRUE;

out:

	if (NOT lib_init_successful)
		close_libraries();

	RETURN(result);
	return (result);
}

/****************************************************************************/

#endif /* __THREAD_SAFE */
