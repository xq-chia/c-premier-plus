#include <stdio.h>
#define SIZE 8

void main(void) {
    int i;
    int array[SIZE];

    for (i = 1; i <= SIZE; i++) {
        printf("Please enter the integer for element %d: ", i);
        scanf("%d", &array[i]);
    }

    while (--i > 0) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
