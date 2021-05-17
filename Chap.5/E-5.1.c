#include <stdio.h>
#define rate 60

void main(void) {
    int time;

    printf("Please enter the time(minute) to convert: ");
    scanf("%d", &time);

    while (time > 0) {
        printf("%d minutes is equal to %d hours and %d minutes\n", time, time / 60, time % 60);

        printf("Please enter the time(minute) to convert, enter 0 to exit the program: ");
        scanf("%d", &time);
    }
}
