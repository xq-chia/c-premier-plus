#include <stdio.h>

void main(void) {
    int count;
    int ch;

    count = 0;
    while ((ch = getchar()) != EOF) {
        count++;
    }

    printf("There are %d characters in the input, including whitespace\n", count);
}
