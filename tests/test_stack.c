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

int main(void)
{
    test_stack_create_destroy();

    printf("\nAll stack tests passed successfully!\n");

    return 0;
}
