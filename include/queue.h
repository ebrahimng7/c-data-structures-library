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

int queue_enqueue(Queue* queue, int value);

int queue_dequeue(Queue* queue);

int queue_front(const Queue* queue);

size_t queue_size(const Queue* queue);

int queue_is_empty(const Queue* queue);

#endif
