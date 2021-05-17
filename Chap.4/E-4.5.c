#include <stdio.h>

void main(void) {
    float speed, filesize, time;

    printf("Please enter your download speed(Mbps): ");
    scanf("%f", &speed);

    printf("Please enter the size of file(MB): ");
    scanf("%f", &filesize);

    time = filesize * 8 / speed;
    printf("At %.2f megabits per second, a file of %.2f megabytes\n", speed, filesize);
    printf("download in %.2f seconds.\n", time);
}
