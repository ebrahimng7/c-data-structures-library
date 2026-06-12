#include "linked_list.h"

#include <assert.h>
#include <stdio.h>

void test_linked_list_create_destroy(void)
{
    LinkedList* list = linked_list_create();

    assert(list != NULL);

    assert(list->head == NULL);

    assert(list->tail == NULL);

    assert(list->size == 0);

    linked_list_destroy(list);

    printf("test_linked_list_create_destroy PASSED\n");
}

int main(void)
{
    test_linked_list_create_destroy();

    printf("\nAll linked list tests passed successfully!\n");

    return 0;
}
