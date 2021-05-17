#include <stdio.h>

void main(void) {
    int i;
    int term;
    int sign;
    float res;

    printf("Please enter the number of terms for computation\n");
    printf("(zero or negative value to quit): ");
    scanf("%d", &term);

    do {
        printf("1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ... = ");
        for (i = 1, res = 0; i <= term; i++) {
            res += 1.0 / i;
        }
        printf("%f\n", res);

        printf("1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ... = ");
        for (i = 1, sign = -1, res = 0; i <= term; i++) {
            sign *= -1;
            res += sign * 1.0 / i; 
        }
        printf("%f\n", res);

        printf("Please enter the number of terms for computation\n");
        printf("(zero or negative value to quit): ");
        scanf("%d", &term);
    } while (term > 0);
}
