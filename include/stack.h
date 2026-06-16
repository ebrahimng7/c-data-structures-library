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

#endif
