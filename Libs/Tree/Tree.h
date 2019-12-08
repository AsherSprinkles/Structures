#ifndef TREE_H
#define TREE_H

typedef struct _node {
    int key;
    int value;
    struct _node **children;
} NODE;

struct _tree {
    int n;
    NODE *root;
};

typedef struct _tree TREE;

#endif
