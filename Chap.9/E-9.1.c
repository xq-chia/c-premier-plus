#include <stdio.h>

double min(double d1, double d2);

void main(void) {
    double m, n;

    printf("Please enter the first value: ");
    scanf("%lf", &m);
    printf("Please enter the second value: ");
    scanf("%lf", &n);

    if (n != m) {
        printf("%lf is lesser\n", min(m, n));
    } else
        printf("They are equal\n");

}

double min(double d1, double d2) {
    return d1 > d2 ? d2 : d1;
}
