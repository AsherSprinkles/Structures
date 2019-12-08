#if !defined(_STACK)
#define _STACK

// Private header file for Stack
typedef struct _node {
    int value;
    struct _node *next;
} NODE;

#endif // _STACK
