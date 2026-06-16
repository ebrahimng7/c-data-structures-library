#ifndef QUEUE_H
#define QUEUE_H

#include <stddef.h>

#include "linked_list.h"

typedef struct Queue
{
    LinkedList* list;
} Queue;

Queue* queue_create(void);

void queue_destroy(Queue* queue);

#endif
