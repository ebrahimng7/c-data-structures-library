#ifndef VECTOR_H
#define VECTOR_H

#include <stddef.h>

typedef struct
{
    int* data;
    size_t size;
    size_t capacity;
} Vector;

size_t vector_size(const Vector* vec);
size_t vector_capacity(const Vector* vec);
int vector_is_empty(const Vector* vec);

Vector* vector_create(void);
void vector_destroy(Vector* vec);

void vector_push_back(
    Vector* vec,
    int value
);

void vector_pop_back(
    Vector* vec
);

int vector_get(
    Vector* vec,
    size_t index
);

void vector_set(
    Vector* vec,
    size_t index,
    int value
);

#endif
