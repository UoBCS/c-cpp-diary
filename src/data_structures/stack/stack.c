
#include <stdio.h>

#include "data_structures/stack.h"

void push(int *s, int v)
{
    *s++ = v;
}

int pop(int *s)
{
    return *--s;
}

int peek(int *s)
{
    return *s;
}
