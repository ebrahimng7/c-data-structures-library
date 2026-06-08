#include <assert.h>
#include <stdio.h>

#include "vector.h"

void test_vector_create_destroy(void)
{
    Vector* vec = vector_create();

    assert(vec != NULL);

    assert(vec->data != NULL);

    assert(vec->size == 0);

    assert(vec->capacity == 4);

    vector_destroy(vec);

    printf("test_vector_create_destroy PASSED\n");
}

int main(void)
{
    test_vector_create_destroy();

    printf("All tests passed!\n");

    return 0;
}
