
#include <stdio.h>
#include <stdlib.h>

#include "dynamic_array.h"

void d_arr_init(d_arr *arr)
{
    arr->capacity = INITIAL_CAPACITY;
    arr->size = 0;
    arr->data = malloc(sizeof(int) * INITIAL_CAPACITY);
}

void d_arr_add(d_arr *arr, int val)
{
    d_arr_double_capacity(arr);
    arr->data[arr->size++] = val;
}

int d_arr_get(d_arr *arr, int idx)
{
    return (idx >= 0 && idx < arr->size) ? arr->data[idx] : -1;
}

void d_arr_set(d_arr *arr, int idx, int val)
{
    while (idx >= arr->size)
	d_arr_add(arr, 0);

    arr->data[idx] = val;
}

void d_arr_double_capacity(d_arr *arr)
{
    if (arr->size >= arr->capacity)
    {
	arr->capacity *= 2;
	arr->data = realloc(arr->data, sizeof(int) * arr->capacity);
    }
}

void d_arr_free(d_arr *arr)
{
    free(arr->data);
}
