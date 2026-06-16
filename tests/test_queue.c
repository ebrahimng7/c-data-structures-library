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

int main(void)
{
    test_queue_create_destroy();

    printf("\nAll queue tests passed successfully!\n");

    return 0;
}
