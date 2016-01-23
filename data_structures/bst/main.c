
#include <stdio.h>

#include "bst.h"

int main(void)
{
    bst_t *tree = NULL;

    printf("Ordered list:\n");
    insert(10, &tree);
    insert(3, &tree);
    traverse(tree);

    printf("\n");
    printf("Search 3: %d\n", search(3, tree));
    printf("Search 10: %d\n", search(10, tree));
    printf("Search 45: %d\n", search(45, tree));

    return 0;
}
