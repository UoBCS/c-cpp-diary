
#include <stdio.h>

#include "dynamic_array.h"

int main(int argc, char **argv)
{
    d_arr arr;
    d_arr_init(&arr);
    
    int i;
    for (i = 0; i < 20; i++)
	d_arr_add(&arr, i);

    for (i = 0; i < 20; i++)
	printf("%d ", d_arr_get(&arr, i));
    
    printf("\nIndex out of bounds: %d\n", d_arr_get(&arr, 67));
    
    d_arr_free(&arr);

    return 0;
}
