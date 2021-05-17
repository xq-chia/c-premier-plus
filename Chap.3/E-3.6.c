#include <stdio.h>

void main(void) {
    int amount;

    printf("Please enter the amount of water(quarts): ");
    scanf("%d", &amount);
    printf("There are %e water molecules in %d quarts of water\n", 950 * amount / 3.0E-23, amount);
}
