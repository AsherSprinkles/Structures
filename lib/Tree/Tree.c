#include <stdlib.h>
#include <stdio.h>
#include "../Stack/Stack.h"
#include "Tree.h"
#include ".Tree.h"

static NODE *make_node(int key, int value, int n)
{
    NODE *newNode = malloc(sizeof(NODE));
    newNode->key = key;
    newNode->value = value;
    newNode->children = malloc(n * sizeof(NODE));
    
    for (int i = 0; i < n; i++)
    {
        newNode->children[i] = NULL;
    }

    return newNode;
}

static void delete_node(NODE *node, int n)
{
    // recursively delete children
    for (int i = 0; i < n; i++)
    {
        if (node->children[i])
            delete_node(node->children[i], n);
    }
    // all children are deleted
    free(node->children);
    free(node);
}

TREE *make_tree(int n)
{
    TREE *tree = malloc(sizeof(TREE));
    tree->n = n;
    tree->root = NULL;
    return tree;
}

void delete_tree(TREE *tree)
{
    delete_node(tree->root, tree->n);
    free(tree);
}

NODE *find_node(int key, TREE *tree)
{

}
