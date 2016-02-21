
#include <stdio.h>

#include "stack.h"

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
