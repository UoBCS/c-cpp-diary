
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "bst.h"

bst_t *mktree(int val, bst_t *right, bst_t *left)
{
    bst_t *bst = malloc(sizeof(bst_t));
    bst->val = val;
    bst->right = right;
    bst->left = left;
    return bst;
}

void insert(int val, bst_t **bst)
{
    if (!(*bst))
    {
        *bst = mktree(val, NULL, NULL);
        return;
    }

    if (val < (*bst)->val)
        insert(val, &(*bst)->left);
    else if (val > (*bst)->val)
        insert(val, &(*bst)->right);
}

uint8_t search(int val, bst_t *bst)
{
    if (!bst)
        return 0;

    if (val < bst->val)
        return search(val, bst->left);
    else if (val > bst->val)
        return search(val, bst->right);
    else
        return 1;
}

void traverse(bst_t *bst)
{
    if (bst)
    {
        traverse(bst->left);
        printf("%d\n", bst->val);
        traverse(bst->right);
    }
}
