#include <stdio.h>

void main(void) {
    int loperand, roperand;

    printf("This program computes moduli.\n");

    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &roperand);

    printf("Now enter the first operand: ");
    scanf("%d", &loperand);

    printf("%d %% %d is %d\n", loperand, roperand, loperand % roperand);

    while (loperand > 0) {
        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d", &loperand);

        printf("%d %% %d is %d\n", loperand, roperand, loperand % roperand);
    }
    
    printf("Done\n");
}
