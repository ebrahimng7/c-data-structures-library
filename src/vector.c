#include <stdlib.h>
#include <assert.h>
#include <stdlib.h>

#include "vector.h"

#define INITIAL_CAPACITY 4

static int vector_resize(
    Vector* vec,
    size_t new_capacity
);

Vector* vector_create(void)
{
    Vector* vec = malloc(sizeof(Vector));

    if (vec == NULL)
    {
        return NULL;
    }

    vec->data = malloc(INITIAL_CAPACITY * sizeof(int));

    if (vec->data == NULL)
    {
        free(vec);
        return NULL;
    }

    vec->size = 0;
    vec->capacity = INITIAL_CAPACITY;

    return vec;
}

void vector_destroy(Vector* vec)
{
    if (vec == NULL)
    {
        return;
    }

    free(vec->data);
    free(vec);
}

static int vector_resize(
    Vector* vec,
    size_t new_capacity
)
{
    int* new_data = realloc(
        vec->data,
        new_capacity * sizeof(int)
    );

    if (new_data == NULL)
    {
        return 0;
    }

    vec->data = new_data;
    vec->capacity = new_capacity;

    return 1;
}

void vector_push_back(
    Vector* vec,
    int value
)
{
    if (vec == NULL)
    {
        return;
    }

    if (vec->size == vec->capacity)
    {
        if (!vector_resize(
                vec,
                vec->capacity * 2))
        {
            return;
        }
    }

    vec->data[vec->size] = value;

    vec->size++;
}

int vector_get(
    Vector* vec,
    size_t index
)
{
    assert(vec != NULL);

    assert(index < vec->size);

    return vec->data[index];
}

void vector_set(
    Vector* vec,
    size_t index,
    int value
)
{
    assert(vec != NULL);

    assert(index < vec->size);

    vec->data[index] = value;
}

void vector_pop_back(Vector* vec)
{
    assert(vec != NULL);

    if (vec->size == 0)
    {
        return;
    }

    vec->size--;
}
