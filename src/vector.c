#include <stdlib.h>
#include "/home/ebrahim/Documents/C Projects/c-data-structure-library/include/vector.h"

#define INITIAL_CAPACITY 4

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
