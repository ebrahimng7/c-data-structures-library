#ifndef STACK_H
#define STACK_H

#include <stddef.h>

#include "linked_list.h"

typedef struct Stack
{
    LinkedList* list;
} Stack;

Stack* stack_create(void);

void stack_destroy(Stack* stack);

int stack_push(Stack* stack, int value);

int stack_pop(Stack* stack);

int stack_top(const Stack* stack);

size_t stack_size(const Stack* stack);

int stack_is_empty(const Stack* stack);

#endif
