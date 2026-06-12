#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stddef.h>

typedef struct Node
{
    int data;
    struct Node* next;
} Node;

typedef struct
{
    Node* head;
    Node* tail;
    size_t size;
} LinkedList;

LinkedList* linked_list_create(void);
void linked_list_destroy(LinkedList* list);

#endif
