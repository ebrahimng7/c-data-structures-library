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

void test_linked_list_push_front(void)
{
    LinkedList* list = linked_list_create();

    assert(linked_list_push_front(list, 10) == 0);

    assert(list->size == 1);

    assert(list->head != NULL);

    assert(list->tail != NULL);

    assert(list->head == list->tail);

    assert(list->head->data == 10);

    assert(linked_list_push_front(list, 20) == 0);

    assert(list->size == 2);

    assert(list->head->data == 20);

    assert(list->head->next->data == 10);

    assert(list->tail->data == 10);

    linked_list_destroy(list);

    printf("test_linked_list_push_front PASSED\n");
}

int main(void)
{
    test_linked_list_create_destroy();
    test_linked_list_push_front();
    
    printf("\nAll linked list tests passed successfully!\n");

    return 0;
}
