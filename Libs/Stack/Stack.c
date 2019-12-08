#include <stdlib.h>
#include <stdio.h>
#include "Stack.h"
#include ".Stack.h"

static NODE *make_node(int value)
{
    NODE *node = malloc(sizeof(NODE));
    node->value = value;
    node->next = NULL;
    return node;
}

STACK *make_stack()
{
    STACK *stack = malloc(sizeof(STACK));
    return stack;
}

void push(int value, STACK *stack)
{
    NODE *node = make_node(value);
    NODE *head = *stack;
    node->next = head;
    head = node;
    *stack = head;
}

int pop(STACK *stack)
{
    NODE *head = *stack;
    if (head == NULL)
        return -1;
    int value = head->value;
    NODE *node;
    node = head;
    head = head->next;
    *stack = head;
    free(node);
    return value;
}

void delete_stack(STACK *stack)
{
    NODE *head = *stack;
    NODE *node = head;
    while (head != NULL)
    {
        head = head->next;
        free(node);
        node = head;
    }
}

void print(STACK *stack)
{
    NODE *head = *stack;
    NODE *node = head;
    NODE *prev = NULL;
    printf("[ ");
    // Empty stack
    if (head == NULL) {
        printf("\n");
        return;
    }
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
        printf("%d ", node->value);
    }
    printf("\n");
}

int is_empty(STACK *stack)
{
    if (*stack == NULL)
        return 1;
    return 0;
}
