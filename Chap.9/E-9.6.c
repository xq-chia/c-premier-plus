#include <stdio.h>

void sort(double *pd1, double *pd2, double *pd3);

void main(void) {
    double d1, d2, d3;

    printf("Please enter the value for d1: ");
    scanf("%lf", &d1);
    printf("Please enter the value for d2: ");
    scanf("%lf", &d2);
    printf("Please enter the value for d3: ");
    scanf("%lf", &d3);

    sort(&d1, &d2, &d3);
    printf("After the operation, the value for d1 is %lf\n", d1);
    printf("After the operation, the value for d2 is %lf\n", d2);
    printf("After the operation, the value for d3 is %lf\n", d3);
}

void sort(double * pd1, double * pd2, double * pd3) {
    double temp;

    if (*pd1 > *pd3) {
        temp = *pd3;
        *pd3 = *pd1;
        *pd1 = temp;
    }
    if (*pd1 > *pd2) {
        temp = *pd2;
        *pd2 = *pd1;
        *pd1 = temp;
    }
    if (*pd2 > *pd3) {
        temp = *pd3;
        *pd3 = *pd2;
        *pd2 = temp;
    }
}
