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
