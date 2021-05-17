#include <stdio.h>

void main(void) {
    float f1, f2;
    _Bool good_input;

    do {
        printf("Please enter the first floating-point number(q to exit): ");
        scanf("%f", &f1);
        printf("Please enter the second floating-point number: ");
        good_input = scanf("%f", &f2);
        printf("(%f - %f) / (%f * %f) = %f\n", f1, f2, f1, f2, (f1 - f2) / (f1 * f2));
    } while (good_input);
}
