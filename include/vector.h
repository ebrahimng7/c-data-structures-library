Vector* vector_create();

void vector_destroy(Vector* vec);

void vector_push_back(
    Vector* vec,
    int value
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

void vector_pop_back(
    Vector* vec
);
