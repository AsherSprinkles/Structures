#if !defined(STACK)
#define STACK

struct _node;
typedef struct _node* Stack;

Stack make_stack();
void push(int, Stack *);
int pop(Stack *);
void delete_stack(Stack);
void print(Stack);
int is_empty(Stack);

#endif // STACK