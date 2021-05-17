#include <stdio.h>


double cube(double n);

void main(void) {
    double input;

    printf("Please enter the number to be cubed: ");
    scanf("%lf", &input);
    
    printf("%lf cubed equals to %lf\n", input, cube(input));
}

double cube(double n) {
    return n * n * n;
}
