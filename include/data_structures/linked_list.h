
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct node {
    int data;
    struct node *next;
} node_t;

int count(node_t *head);
void push(node_t *head, int data);
void push1(node_t **head, int data);
int pop(node_t **head);

#endif
