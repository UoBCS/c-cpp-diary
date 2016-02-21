
#include <stdint.h>

#ifndef BINARY_TREE_H
#define BINARY_TREE_H

typedef struct bst {
    int val;
    struct bst *right, *left;
} bst_t;

bst_t *mktree(int val, bst_t *right, bst_t *left);
void insert(int val, bst_t **bst);
uint8_t search(int val, bst_t *bst);
void traverse(bst_t *bst);

#endif
