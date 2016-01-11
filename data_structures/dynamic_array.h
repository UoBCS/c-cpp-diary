
#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

#define INITIAL_CAPACITY 100

typedef struct {
    unsigned int capacity;
    unsigned int size; /* Capacity used so far */
    int *data;
} d_arr;

void d_arr_init(d_arr *arr);
void d_arr_add(d_arr *arr, int val);
int d_arr_get(d_arr *arr, int idx);
void d_arr_set(d_arr *arr, int idx, int val);
void d_arr_double_capacity(d_arr *arr);
void d_arr_free(d_arr *arr);

#endif
