#include <stdio.h>

void main(void) {
    int input;

    printf("Please enter an ASCII code value: ");
    scanf("%d", &input);
    printf("\nThe ASCII code '%d' correspond to '%c'\n", input, input);
}
