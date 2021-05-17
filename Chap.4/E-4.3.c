#include <stdio.h>

void main(void) {
    float flt;

    printf("Please enter a floating-point number: ");
    scanf("%f", &flt);

    printf("The input is %.1f or %.1e.\n", flt, flt);
    printf("The input is %+.3f or %.3E.\n", flt, flt);
}
