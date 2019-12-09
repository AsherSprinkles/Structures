#ifndef STACK_H
#define STACK_H

struct _stacknode;
typedef struct _stacknode* STACK;

STACK *make_stack();
void push(int, STACK *);
int pop(STACK *);
void delete_stack(STACK *);
void print_stack(STACK *);
int is_empty(STACK *);

#endif // STACK_H
