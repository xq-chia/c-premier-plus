#include <stdio.h>

void main(void) {
    int day;

    printf("Please enter the number of day to convert: ");
    scanf("%d", &day);

    while (day > 0) {
        printf("%d days are %d weeks, %d days.\n", day, day / 7, day % 7);

        printf("Please enter the number of day to convert, enter 0 to exit the program: ");
        scanf("%d", &day);
    }
}
