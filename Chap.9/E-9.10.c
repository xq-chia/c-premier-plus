#include <stdio.h>

void to_base_n(unsigned long n, unsigned short base);

void main(void) {
    unsigned long number;
    unsigned short base;

    do {
        printf("Enter an integer (q to quit):\n");
    } while (scanf("%lu", &number) != 1);
    do {
        printf("Enter the base of conversion (2 to 10 inclusively): \n");
    } while (scanf("%hu", &base) != 1);

    printf("Base %hu equivalent of %lu is ", base, number);
    to_base_n(number, base);
    putchar('\n');
}

void to_base_n(unsigned long n, unsigned short base){
    int r;

    r = n % base;
    if (n >= base) {
        to_base_n(n / base, base);
    }
    switch (r) {
        case 0:
            putchar('0');
            break;
        case 1:
            putchar('1');
            break;
        case 2:
            putchar('2');
            break;
        case 3:
            putchar('3');
            break;
        case 4:
            putchar('4');
            break;
        case 5:
            putchar('5');
            break;
        case 6:
            putchar('6');
            break;
        case 7:
            putchar('7');
            break;
        case 8:
            putchar('8');
            break;
        case 9:
            putchar('9');
            break;
    }
} 
