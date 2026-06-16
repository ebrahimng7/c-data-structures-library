#include "stack.h"

#include <assert.h>
#include <stdio.h>

void test_stack_create_destroy(void)
{
    Stack* stack = stack_create();

    assert(stack != NULL);

    assert(stack->list != NULL);

    stack_destroy(stack);

    printf("test_stack_create_destroy PASSED\n");
}

void test_stack_operations(void)
{
    Stack* stack = stack_create();

    assert(stack != NULL);

    assert(stack_push(stack, 10) == 0);

    assert(stack_top(stack) == 10);

    assert(stack_push(stack, 20) == 0);

    assert(stack_top(stack) == 20);

    assert(stack_push(stack, 30) == 0);

    assert(stack_top(stack) == 30);

    assert(stack_pop(stack) == 0);

    assert(stack_top(stack) == 20);

    assert(stack_pop(stack) == 0);

    assert(stack_top(stack) == 10);

    assert(stack_pop(stack) == 0);

    assert(stack_pop(stack) == -1);

    stack_destroy(stack);

    printf("test_stack_operations PASSED\n");
}

void test_stack_properties(void)
{
    Stack* stack = stack_create();

    assert(stack_is_empty(stack));

    assert(stack_size(stack) == 0);

    stack_push(stack, 10);

    assert(!stack_is_empty(stack));

    assert(stack_size(stack) == 1);

    stack_push(stack, 20);

    assert(stack_size(stack) == 2);

    stack_pop(stack);

    assert(stack_size(stack) == 1);

    stack_pop(stack);

    assert(stack_size(stack) == 0);

    assert(stack_is_empty(stack));

    stack_destroy(stack);

    printf("test_stack_properties PASSED\n");
}

int main(void)
{
    test_stack_create_destroy();
    test_stack_operations();
    test_stack_properties();
    printf("\nAll stack tests passed successfully!\n");

    return 0;
}

