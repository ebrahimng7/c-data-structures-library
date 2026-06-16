#include "stack.h"

#include <stdlib.h>

Stack* stack_create(void)
{
    Stack* stack = malloc(sizeof(Stack));

    if (stack == NULL)
    {
        return NULL;
    }

    stack->list = linked_list_create();

    if (stack->list == NULL)
    {
        free(stack);
        return NULL;
    }

    return stack;
}

void stack_destroy(Stack* stack)
{
    if (stack == NULL)
    {
        return;
    }

    linked_list_destroy(stack->list);

    free(stack);
}
