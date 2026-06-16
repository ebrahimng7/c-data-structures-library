#include "queue.h"

#include <stdlib.h>

#include <assert.h>

Queue* queue_create(void)
{
    Queue* queue = malloc(sizeof(Queue));

    if (queue == NULL)
    {
        return NULL;
    }

    queue->list = linked_list_create();

    if (queue->list == NULL)
    {
        free(queue);
        return NULL;
    }

    return queue;
}

void queue_destroy(Queue* queue)
{
    if (queue == NULL)
    {
        return;
    }

    linked_list_destroy(queue->list);

    free(queue);
}

int queue_enqueue(Queue* queue, int value)
{
    assert(queue != NULL);

    return linked_list_push_back(queue->list, value);
}

int queue_dequeue(Queue* queue)
{
    assert(queue != NULL);

    return linked_list_pop_front(queue->list);
}

int queue_front(const Queue* queue)
{
    assert(queue != NULL);

    return linked_list_front(queue->list);
}
