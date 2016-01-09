#include <stdio.h>
#include "strlib.h"

int main(int argc, char **argv)
{
    if (argc != 3)
    {
	printf("Usage: ./test <word1> <word2>\n");
	return 1;
    }
    
    char *w1 = *(argv + 1);
    char *w2 = *(argv + 2);
    printf("word 1: %s\n", w1);
    printf("word 2: %s\n", w2);
    
    printf("str_len %s: %d\n", w1, str_len(w1));
    printf("str_len %s: %d\n", w2, str_len(w2));

    printf("str_cmp %s %s: %d\n", w1, w2, str_cmp(w1, w2));

    printf("reverse %s: ", w1);
    reverse(w1);
    printf("%s\n", w1);
    printf("reverse %s: ", w2);
    reverse(w2);
    printf("%s\n", w2);

    return 0;
}


