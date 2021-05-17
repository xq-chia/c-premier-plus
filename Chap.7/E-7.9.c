#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n);

void main(void) {
    int i, j;
    int input;

    printf("Please enter a positive integer to show the preceding prime numbers: ");
    scanf("%d", &input);

    printf("The prime number preceding %d are\n", input);
    for (i = 2; i <= input; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

bool is_prime(int n) {
    int i;

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
} 
