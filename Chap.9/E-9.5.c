#include <stdio.h>

void larger_of(double * pd1, double * pd2);

void main(void) {
    double d1, d2;

    printf("Please enter the initial value for d1: ");
    scanf("%lf", &d1);
    printf("Please enter the initial value for d2: ");
    scanf("%lf", &d2);

    larger_of(&d1, &d2);
    printf("After the operation, d1 has a value of %lf\n", d1);
    printf("After the operation, d2 has a value of %lf\n", d2);
}

void larger_of(double * pd1, double * pd2) {
    double larger;
    
    if (*pd1 > *pd2) {
        larger = *pd1;
    } else
        larger = *pd2;

    *pd1 = larger, *pd2 = larger;
}
