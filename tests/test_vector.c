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

void test_vector_push_back(void)
{
    Vector* vec = vector_create();

    vector_push_back(vec, 10);
    vector_push_back(vec, 20);
    vector_push_back(vec, 30);

    assert(vec->size == 3);

    assert(vec->data[0] == 10);
    assert(vec->data[1] == 20);
    assert(vec->data[2] == 30);

    vector_destroy(vec);

    printf("test_vector_push_back PASSED\n");
}

void test_vector_resize(void)
{
    Vector* vec = vector_create();

    assert(vec->capacity == 4);

    vector_push_back(vec, 10);
    vector_push_back(vec, 20);
    vector_push_back(vec, 30);
    vector_push_back(vec, 40);

    assert(vec->capacity == 4);

    vector_push_back(vec, 50);

    assert(vec->size == 5);
    assert(vec->capacity == 8);

    assert(vec->data[4] == 50);

    vector_destroy(vec);

    printf("test_vector_resize PASSED\n");
}

void test_vector_get(void)
{
    Vector* vec = vector_create();

    vector_push_back(vec, 10);
    vector_push_back(vec, 20);
    vector_push_back(vec, 30);

    assert(vector_get(vec, 0) == 10);
    assert(vector_get(vec, 1) == 20);
    assert(vector_get(vec, 2) == 30);

    vector_destroy(vec);

    printf("test_vector_get PASSED\n");
}

void test_vector_set(void)
{
    Vector* vec = vector_create();

    vector_push_back(vec, 10);
    vector_push_back(vec, 20);
    vector_push_back(vec, 30);

    vector_set(vec, 1, 999);

    assert(vector_get(vec, 0) == 10);
    assert(vector_get(vec, 1) == 999);
    assert(vector_get(vec, 2) == 30);

    vector_destroy(vec);

    printf("test_vector_set PASSED\n");
}

void test_vector_pop_back(void)
{
    Vector* vec = vector_create();

    vector_push_back(vec, 10);
    vector_push_back(vec, 20);
    vector_push_back(vec, 30);

    assert(vec->size == 3);

    vector_pop_back(vec);

    assert(vec->size == 2);

    assert(vector_get(vec, 0) == 10);
    assert(vector_get(vec, 1) == 20);

    vector_destroy(vec);

    printf("test_vector_pop_back PASSED\n");
}

void test_vector_properties(void)
{
    Vector* vec = vector_create();

    assert(vector_size(vec) == 0);

    assert(vector_capacity(vec) == 4);

    assert(vector_is_empty(vec));

    vector_push_back(vec, 10);

    assert(vector_size(vec) == 1);

    assert(!vector_is_empty(vec));

    vector_destroy(vec);

    printf("test_vector_properties PASSED\n");
}

void test_vector_front_back(void)
{
    Vector* vec = vector_create();

    vector_push_back(vec, 10);
    vector_push_back(vec, 20);
    vector_push_back(vec, 30);

    assert(vector_front(vec) == 10);

    assert(vector_back(vec) == 30);

    vector_destroy(vec);

    printf("test_vector_front_back PASSED\n");
}

int main(void)
{
    test_vector_create_destroy();

    test_vector_push_back();

    test_vector_resize();

    test_vector_get();

    test_vector_set();

    test_vector_pop_back();
    
    test_vector_front_back();

    printf("\nAll tests passed successfully!\n");

    return 0;
}
