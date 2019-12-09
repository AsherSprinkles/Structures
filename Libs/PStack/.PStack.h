#ifndef _PSTACK
#define _PSTACK

// Private header file for Stack
typedef struct _pstacknode {
    void *value;
    struct _pstacknode *next;
} NODE;

#endif // _PSTACK
