#include "queue.h"

#include <assert.h>
#include <stdio.h>

void test_queue_create_destroy(void)
{
    Queue* queue = queue_create();

    assert(queue != NULL);
    assert(queue->list != NULL);

    queue_destroy(queue);

    printf("test_queue_create_destroy PASSED\n");
}

void test_queue_operations(void)
{
    Queue* queue = queue_create();

    assert(queue != NULL);

    assert(queue_enqueue(queue, 10) == 0);
    assert(queue_front(queue) == 10);

    assert(queue_enqueue(queue, 20) == 0);
    assert(queue_front(queue) == 10);

    assert(queue_enqueue(queue, 30) == 0);
    assert(queue_front(queue) == 10);

    assert(queue_dequeue(queue) == 0);
    assert(queue_front(queue) == 20);

    assert(queue_dequeue(queue) == 0);
    assert(queue_front(queue) == 30);

    assert(queue_dequeue(queue) == 0);

    assert(queue_dequeue(queue) == -1);

    queue_destroy(queue);

    printf("test_queue_operations PASSED\n");
}

void test_queue_properties(void)
{
    Queue* queue = queue_create();

    assert(queue_is_empty(queue));

    assert(queue_size(queue) == 0);

    queue_enqueue(queue, 10);

    assert(!queue_is_empty(queue));

    assert(queue_size(queue) == 1);

    queue_enqueue(queue, 20);

    assert(queue_size(queue) == 2);

    queue_dequeue(queue);

    assert(queue_size(queue) == 1);

    queue_dequeue(queue);

    assert(queue_size(queue) == 0);

    assert(queue_is_empty(queue));

    queue_destroy(queue);

    printf("test_queue_properties PASSED\n");
}

int main(void)
{
    test_queue_create_destroy();
    test_queue_operations();
    test_queue_properties();

    printf("\nAll queue tests passed successfully!\n");

    return 0;
}
