#include <proto/exec.h>
#include <dos/dosextens.h>
#include <dos.h>

extern struct _clib2 *__global_clib2;

struct _clib2 *
__getclib2(void) {
    struct _clib2 *r = NULL;
    struct Task *t = FindTask(NULL);

    if (NT_PROCESS == t->tc_Node.ln_Type) {
        r = (struct _clib2 *) ((struct Process *) t)->pr_CLibData;
    }

    if (!r) {
        r = __global_clib2;
    }

    return r;
}