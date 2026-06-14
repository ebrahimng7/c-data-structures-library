#include "linked_list.h"

#include <assert.h>
#include <stdlib.h>

LinkedList* linked_list_create(void)
{
    LinkedList* list = malloc(sizeof(LinkedList));

    if (list == NULL)
    {
        return NULL;
    }

    list->head = NULL;
    list->tail = NULL;
    list->size = 0;

    return list;
}

void linked_list_destroy(LinkedList* list)
{
    if (list == NULL)
    {
        return;
    }

    Node* current = list->head;

    while (current != NULL)
    {
        Node* next = current->next;

        free(current);

        current = next;
    }

    free(list);
}

int linked_list_push_front(LinkedList* list, int value)
{
    assert(list != NULL);

    Node* new_node = malloc(sizeof(Node));

    if (new_node == NULL)
    {
        return -1;
    }

    new_node->data = value;

    new_node->next = list->head;

    list->head = new_node;

    if (list->tail == NULL)
    {
        list->tail = new_node;
    }

    list->size++;

    return 0;
}

int linked_list_push_back(LinkedList* list, int value)
{
    assert(list != NULL);

    Node* new_node = malloc(sizeof(Node));

    if (new_node == NULL)
    {
        return -1;
    }

    new_node->data = value;
    new_node->next = NULL;

    if (list->tail == NULL)
    {
        list->head = new_node;
        list->tail = new_node;
    }
    else
    {
        list->tail->next = new_node;
        list->tail = new_node;
    }

    list->size++;

    return 0;
}

int linked_list_front(const LinkedList* list)
{
    assert(list != NULL);
    assert(list->head != NULL);

    return list->head->data;
}

int linked_list_back(const LinkedList* list)
{
    assert(list != NULL);
    assert(list->tail != NULL);

    return list->tail->data;
}

int linked_list_pop_front(LinkedList* list)
{
    assert(list != NULL);

    if (list->head == NULL)
    {
        return -1;
    }

    Node* node_to_delete = list->head;

    list->head = list->head->next;

    free(node_to_delete);

    list->size--;

    if (list->head == NULL)
    {
        list->tail = NULL;
    }

    return 0;
}

size_t linked_list_size(const LinkedList* list)
{
    assert(list != NULL);

    return list->size;
}

int linked_list_is_empty(const LinkedList* list)
{
    assert(list != NULL);

    return list->size == 0;
}
