#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void) {
    int i, j;
    int random;
    int one, two, three, four, five, six, seven, eight, nine, ten;

    for (i = 0; i < 10; ++i) {
        printf("Set %d\n", i + 1);
        one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0, ten = 0;
        for (j = 0; j < 1000; ++j) {
            random = (rand() % 10) + 1; 
            
            switch (random) {
                case 1:
                    one++;
                    break;
                case 2:
                    two++;
                    break;
                case 3:
                    three++;
                    break;
                case 4:
                    four++;
                    break;
                case 5:
                    five++;
                    break;
                case 6:
                    six++;
                    break;
                case 7:
                    seven++;
                    break;
                case 8:
                    eight++;
                    break;
                case 9:
                    nine++;
                    break;
                case 10:
                    ten++;
                    break;
            }
        }
        printf("one:\t%d\n", one);
        printf("two:\t%d\n", two);
        printf("three:\t%d\n", three);
        printf("four:\t%d\n", four);
        printf("five:\t%d\n", five);
        printf("six:\t%d\n", six);
        printf("seven:\t%d\n", seven);
        printf("eight:\t%d\n", eight);
        printf("nine:\t%d\n", nine);
        printf("ten:\t%d\n", ten);
    }
}
