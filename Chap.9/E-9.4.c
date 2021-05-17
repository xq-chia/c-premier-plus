#include <stdio.h>

double harmonic(double d1, double d2);

void main(void) {
    double d1, d2;

    printf("Please enter the first value: ");
    scanf("%lf", &d1);
    printf("Please enter the second value: ");
    scanf("%lf", &d2);

    printf("The harmonic mean of %lf and %lf is %lf\n", d1, d2, harmonic(d1, d2));
}

double harmonic(double d1, double d2) {
    return 1 / (((1 / d1) + (1 / d2)) / 2);
}
