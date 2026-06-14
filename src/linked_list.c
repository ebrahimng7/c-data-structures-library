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
