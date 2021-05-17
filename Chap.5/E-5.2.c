#include <stdio.h>

void main(void) {
    int i, start;

    printf("Please enter the starting value: ");
    scanf("%d", &start);

    i = start;
    while (i <= start + 10) {
        printf("%d ", i++);
    }
    printf("\n");
}
