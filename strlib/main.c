#include <stdio.h>
#include "strlib.h"

int main(int argc, char **argv) {
    if (argc != 3) {
	printf("Usage: ./test <word1> <word2>\n");
	return 1;
    }
    
    char *w1 = *(argv + 1);
    char *w2 = *(argv + 2);
    printf("word 1: %s\n", w1);
    printf("word 2: %s\n", w2);
    
    printf("str_len %s: %d\n", w1, str_len(w1));
    return 0;
}


