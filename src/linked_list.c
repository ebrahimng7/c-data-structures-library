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
