#include <stdio.h>

void main(void) {
    float input;

    printf("Enter a floating-point value: ");
    scanf("%f", &input);
    printf("\nfixed-point notation: %f\n", input);
    printf("exponential notaion: %e\n", input);
    printf("p notation: %a\n", input);
}
