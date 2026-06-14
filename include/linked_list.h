#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stddef.h>

typedef struct Node
{
    int data;
    struct Node* next;
} Node;

typedef struct LinkedList
{
    Node* head;
    Node* tail;
    size_t size;
} LinkedList;

LinkedList* linked_list_create(void);
void linked_list_destroy(LinkedList* list);
int linked_list_push_front(LinkedList* list, int value);
int linked_list_push_back(LinkedList* list, int value);
int linked_list_front(const LinkedList* list);
int linked_list_back(const LinkedList* list);
int linked_list_pop_front(LinkedList* list);

#endif
