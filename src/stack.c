#include "stack.h"

#include <stdlib.h>

#include <assert.h>

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

int stack_push(Stack* stack, int value)
{
    assert(stack != NULL);

    return linked_list_push_front(stack->list, value);
}

int stack_pop(Stack* stack)
{
    assert(stack != NULL);

    return linked_list_pop_front(stack->list);
}

int stack_top(const Stack* stack)
{
    assert(stack != NULL);

    return linked_list_front(stack->list);
}

size_t stack_size(const Stack* stack)
{
    assert(stack != NULL);

    return linked_list_size(stack->list);
}

int stack_is_empty(const Stack* stack)
{
    assert(stack != NULL);

    return linked_list_is_empty(stack->list);
}
