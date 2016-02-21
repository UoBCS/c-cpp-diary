/*
 * util - Utility functions
 * 
 * Ossama Edbali <ossedb@gmail.com>
 * MIT License 2016
 *
 */

#include "util.h"

void swap(char *a, char *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}
