#include <stdio.h>
#include <float.h>

void main(void) {
    double dbl = 1.0 / 3.0;
    float flt = 1.0 / 3.0;

    printf("%.4f %.12f %.16f\n", dbl, dbl, dbl);
    printf("%.4f %.12f %.16f\n", flt, flt, flt);

    printf("FLT_DIG: %d\n", FLT_DIG);
    printf("DBL_DIG: %d\n", DBL_DIG);
}
