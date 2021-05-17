#include <stdio.h>
#include <stdbool.h>

double power(double n, int p);

void main(void) {
    double base;
    int exp;
    int temp;

    while (true) {
        printf("Please enter the value of base\n");
        printf("Enter any character other than digit to quit\n");
        if (scanf("%lf", &base) != 1) {
            return;
        }
        if (getchar() != '\n') {
            getchar();
        }
        printf("Please enter the value of exponent\n");
        printf("Enter any character other than digit to quit\n");
        if (scanf("%d", &exp) != 1) {
            return;
        } else
        if (getchar() != '\n') {
            getchar();
        }

        printf("%lf to the power of %d is %lf",
                base, exp, power(base, exp)); 
        printf("%s\n", base == 0 && exp == 0 ? "(undefined)" : "");
        printf("\n");
    }
}

double power(double n, int p) {
    double pow = 1;
    int i;

    if (n == 0) {
        if (p == 0) {
            return 1;
        }
        return 0;
    }

    if (p == 0) {
        return 1;
    }

    if (p > 0) {
        for (i = 0; i < p; i++)
            pow *= n;
        return pow;
    } else if (p < 0) {
        p = -p;
        for (i = 0; i < p; i++)
            pow *= n;
        return 1 / pow;
    }
}
