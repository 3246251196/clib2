/*
 * $Id: termios_tcflow.c,v 1.3 2006-01-08 12:04:27 clib2devs Exp $
*/

#ifndef    _TERMIOS_HEADERS_H
#include "termios_headers.h"
#endif /* _TERMIOS_HEADERS_H */

int
tcflow(int file_descriptor, int UNUSED action) {
    int result = ERROR;
    struct fd *fd;
    struct _clib2 *__clib2 = __CLIB2;

    ENTER();

    SHOWVALUE(file_descriptor);
    SHOWVALUE(action);

    __stdio_lock(__clib2);

    fd = __get_file_descriptor(file_descriptor);
    if (fd == NULL) {
        __set_errno(EBADF);
        goto out;
    }

    __fd_lock(fd);

    /* XXX TODO */
    result = OK;

    __fd_unlock(fd);

out:

    __stdio_unlock(__clib2);

    __check_abort();

    RETURN(result);
    return (result);
}
