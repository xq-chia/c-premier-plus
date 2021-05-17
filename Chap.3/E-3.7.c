#include <stdio.h>

void main(void) {
    int height;

    printf("Please enter you height(cm): ");
    scanf("%d", &height);
    printf("You are %f inches tall\n", height / 2.54);
}
