#include "Stack.h"

int main()
{
    Stack stack = make_stack();
    print(stack);
    for (int i = 1; i < 40; i++)
    {
        push(i, &stack);
        print(stack);
    }

    for (int i = 0; i < 10; i++)
    {
        pop(&stack);
        print(stack);
    }

    for (int i = 0; i < 3; i++)
    {
        push(i, &stack);
        print(stack);
    }

    while (!is_empty(stack))
    {
        pop(&stack);
        print(stack);
    }

    delete_stack(stack);

    return 0;
}