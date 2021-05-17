#include <stdio.h>
#define SIZE 26

void main(void) {
    int i;
    int array[SIZE];
    char ch = 'a';

    for (i = 0; i < SIZE; i++, ch++) {
        array[i] = ch; 
    }

    for (i = 0; i < SIZE; i++) {
        printf("%c ", array[i]);
    }
    printf("\n");
}
