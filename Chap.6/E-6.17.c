#include <stdio.h>
#define WITHDRAWAL 100000

void main(void) {
    int balance = 1000000;
    int year = 0;

    while (balance > 0) {
        balance *= 1.08;
        balance -= WITHDRAWAL;
        year++;
    }

    printf("It takes %d years for Chuckie to empty his account.\n", year);
}
