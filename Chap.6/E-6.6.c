#include <stdio.h>

void main(void) {
    int i;
    int lower, upper;

    printf("Please enter the lower limit: ");
    scanf("%d", &lower);
    printf("Please enter the upper limit: ");
    scanf("%d", &upper);

    printf("n\tn^2\tn^3\n");
    
    for (i = lower; i <= upper; ++i) {
        printf("%d\t%ld\t%ld", i, i * i, i * i * i);
        printf("\n");
    }
}
