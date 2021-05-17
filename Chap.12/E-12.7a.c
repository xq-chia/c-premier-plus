#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "E-12.7.h"

int main(void)
{
    int dice, roll;
    int sides;
    int sets;
    int status;

    srand((unsigned int) time(0));
    printf("Enter the number of sets; enter q to stop.\n");
    while (true) {
        if (scanf("%d", &sets)) {
            getchar();
            printf("How many sides and how many dice?\n");
            while (true) {
                if (scanf("%d %d", &sides, &dice)) {
                    getchar();
                    printf("Here are %d sets of %d %d-sided dice.\n",
                            sets, dice, sides);
                    for (int i = 0; i < sets; ++i) {
                        roll = roll_n_dice(dice, sides);
                        printf("%d ", roll);
                    }
                    putchar('\n');
                    printf("How many sets? Enter q to stop.\n");
                    break;
                } else {
                    printf("You should enter two space-separated integers greater than 0 as input.\n");
                    continue;
                }
            }
        } else if (getchar() == 'q') {
            break;
        } else {
            printf("You should enter an integer greater than 0 as input.\n");
            continue;
        }
    }

    printf("The rollem() function was called %d times.\n",
            roll_count);
    printf("GOOD FORTUNE TO YOU!\n");
    
    return 0;
}
