#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "PStack.h"
#include ".PStack.h"

static NODE *make_node(void *value)
{
    NODE *node = malloc(sizeof(NODE));
    node->value = value;
    node->next = NULL;
    return node;
}

PSTACK *make_pstack()
{
    PSTACK *stack = malloc(sizeof(PSTACK));
    *stack = NULL;
    return stack;
}

void p_push(void *value, PSTACK *stack)
{
    NODE *node = make_node(value);
    NODE *head = *stack;
    node->next = head;
    head = node;
    *stack = head;
}

void *p_pop(PSTACK *stack)
{
    if (*stack == NULL) 
    {
        // Stack is empty
        return NULL;
    }
    NODE *head = *stack;
    void *value = head->value;
    NODE *node;
    node = head;
    head = head->next;
    *stack = head;
    free(node);
    return value;
}

void delete_pstack(PSTACK *stack)
{
    if (*stack == NULL)
    {
        free(stack);
        return;
    }
    NODE *head = *stack;
    NODE *node = head;
    while (head != NULL)
    {
        head = head->next;
        free(node);
        node = head;
    }
    free(stack);
}

void print_pstack(PSTACK *stack)
{
    if (*stack == NULL)
    {
        printf("[ \n");
        return;
    }
    NODE *head = *stack;
    NODE *node = head;
    NODE *prev = NULL;
    printf("[ ");
    // Reverse traversal for printing
    while (prev != head)
    {
        node = head;
        // Find lowest unprinted node
        while (node->next != prev)
        {
            node = node->next;
        }
        prev = node;
        printf("%p ", node->value);
    }
    printf("\n");
}

int pstack_is_empty(PSTACK *stack)
{
    if (*stack == NULL)
        return 1;
    return 0;
}
