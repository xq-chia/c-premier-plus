#include <stdio.h>
#define SIZE 8

void main(void) {
    int i;
    int res;
    int array[SIZE];

    for (i = 0, res = 2; i < SIZE; i++) {
        array[i] = res;
        res *= 2;
    }

    do {
        i--;
        printf("%d ", array[i]);
    } while (i > 0);
    printf("\n");
}
