#include <stdlib.h>
#include <stdio.h>
#include "Stack.h"
#include ".Stack.h"

NODE *make_node(int value)
{
    NODE *node = malloc(sizeof(NODE));
    node->value = value;
    node->next = NULL;
    return node;
}

Stack make_stack()
{
    return NULL;
}

void push(int value, Stack *stack)
{
    NODE *node = make_node(value);
    NODE *head = *stack;
    node->next = head;
    head = node;
    *stack = head;
}

int pop(Stack *stack)
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

void delete_stack(Stack head)
{
    NODE *node = head;
    while (head != NULL)
    {
        head = head->next;
        free(node);
        node = head;
    }
}

void print(Stack stack)
{
    NODE *node = stack;
    NODE *prev = NULL;
    printf("[ ");
    if (stack == NULL) {
        printf("\n");
        return;
    }
    while (prev != stack)
    {
        node = stack;
        while (node->next != prev)
        {
            node = node->next;
        }
        prev = node;
        printf("%d ", node->value);
    }
    printf("\n");
}

int is_empty(Stack stack)
{
    if (stack == NULL)
        return 1;
    return 0;
}