#include <stdio.h>

void main(void) {
    char name[20];
    float height;

    printf("Please enter your name: ");
    scanf("%s", name);

    printf("Please enter you height(inch): ");
    scanf("%f", &height);

    printf("%s, you are %.3f feet tall\n", name, height / 12);
}
