#include <stdio.h>

void main(void) {
    int n;
    int even, odd;
    float avg_even, avg_odd;

    even = 0, odd = 0;
    avg_even = 0.0, avg_odd = 0.0;
    while (scanf("%d", &n) == 1 && n != 0) {
        if (n % 2 == 0) {
            avg_even *= even;
            even++;
            avg_even += n;
            avg_even /= even;
        } else {
            avg_odd *= odd;
            odd++;
            avg_odd += n;
            avg_odd /= odd;
        }
    }

    printf("Number of even number: %d\n", even);
    printf("Average value of even integers: %f\n", avg_even);
    putchar('\n');
    printf("Number of odd number: %d\n", odd );
    printf("Average value of odd integers: %f\n", avg_odd);
}
