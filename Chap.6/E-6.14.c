#include <stdio.h>
#define SIZE 8

void main(void) {
    int i;
    double res;
    double arr1[SIZE], arr2[SIZE];

    for (i = 0; i < SIZE; i++) {
        printf("Please enter the floating-point number for element %d: ", i + 1);
        scanf("%lf", &arr1[i]);
    }
    for (i = 0, res = 0; i < SIZE; i++) {
        res += arr1[i];
        arr2[i] = res;
    }
    
    for (i = 0; i < SIZE; i++) {
        printf("%lf\t", arr1[i]);
    }
    printf("\n");
    for (i = 0; i < SIZE; i++) {
        printf("%lf\t", arr2[i]);
    }
    printf("\n");
}
