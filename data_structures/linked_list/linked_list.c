
#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

void push(node_t *head, int data)
{
    node_t *current = head;

    while (current->next != NULL)
	current = current->next;

    current->next = malloc(sizeof(node_t));
    current->next->data = data;
    current->next->next = NULL;
}


void push1(node_t **head, int data)
{
    node_t *new_node;
    new_node = malloc(sizeof(node_t));

    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

int pop(node_t **head)
{
    int retval = -1;
    node_t *next_node = NULL;

    if (*head == NULL)
	return -1;

    next_node = (*head)->next;
    retval = (*head)->data;
    free(*head);
    *head = next_node;

    return retval;
}
