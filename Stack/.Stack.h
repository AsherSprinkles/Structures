#if !defined(_STACK)
#define _STACK

// Private header file for Stack
typedef struct _node {
    int value;
    struct _node *next;
} NODE;

NODE *make_node(int value);

#endif // _STACK
