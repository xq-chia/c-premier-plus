#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(int argc, char *argv[])
{
    double base;
    int exp;

    if (argc != 3) {
        printf("Usage: %s base exponent\n", argv[0]);
        exit(EXIT_FAILURE);
    } else {
        base = atof(argv[1]);
        exp = atoi(argv[2]);
        printf("%lf\n", pow(base, exp));
    }
    return 0;
}
