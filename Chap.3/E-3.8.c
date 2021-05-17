#include <stdio.h>

void main(void) {
    int cup;

    printf("Please enter the number of cups to convert: ");
    scanf("%d", &cup);
    printf("%dcups = %.2fpints = %dounces = %d tablespoons = %dteaspoons\n", cup, cup / 2.0, cup * 8, cup * 8 * 2, cup * 8 * 2 * 3);
}
