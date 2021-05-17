#include <stdio.h>
#include <limits.h>
#include <float.h>

void main(void) {
    int i;
    float f_max, f_min;

    i = INT_MAX;
    f_max = FLT_MAX;
    f_min = FLT_MIN;

    printf("overflowed integar: %d\n", i + 1);
    printf("overflowed float: %f\n", f_max + 1);
    printf("underflowed float: %f\n", f_min - 1);
}
