#ifndef _TREE
#define _TREE

struct _node {
    int key;
    int value;
    struct _node **children;
};

struct _tree {
    int n;
    struct _node *root;
};

#endif // _TREE