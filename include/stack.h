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

#endif
