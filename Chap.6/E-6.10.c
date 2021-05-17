#include <stdio.h>

void main(void) {
    int i;
    int lower, upper;
    int lower2, upper2, sum2;

    printf("Enter lower and upper integer limits: ");
    scanf("%d %d", &lower, &upper);

    do {
        lower2 = lower * lower;
        upper2 = upper * upper;
        for (i = lower, sum2 = 0; i <= upper; i++) {
            sum2 += i * i;
        }
        
        printf("The sums of squares from %d to %d is %d\n", lower2, upper2, sum2);

        printf("Enter next set of limits: ");
        scanf("%d %d", &lower, &upper);
    } while (upper > lower);
    printf("Done\n");
}
