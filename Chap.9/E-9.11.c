#include <stdio.h>

unsigned long Fibonacci(unsigned short n);

void main(void) {
    unsigned short fib;
    do {
        printf("Please enter the Fibonacci number: ");
    } while (scanf("%hu", &fib) != 1);
    printf("Fibonacci number %hu is %lu\n", fib, Fibonacci(fib));
}

unsigned long Fibonacci(unsigned short n) {
    int i;
    unsigned long prev, prev2, res;

    prev2 = 0, prev = 1;
    if (n == 0) {
        res = prev2;
    } else if (n == 1) {
        res = prev;
    } else {
        for (i = 2; i <= n; i++) {
            res = prev2 + prev;
            prev2 = prev;
            prev = res;
        }
    }
    return res;
}
