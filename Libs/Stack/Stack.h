#if !defined(STACK_H)
#define STACK_H

struct _node;
typedef struct _node* STACK;

STACK *make_stack();
void push(int, STACK *);
int pop(STACK *);
void delete_stack(STACK *);
void print(STACK *);
int is_empty(STACK *);

#endif // STACK_H
