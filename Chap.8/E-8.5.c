#include <stdio.h>

int main(void) {
    int guess;
    int max, min;
    char response;

    guess = 50;
    min = 1, max = 100;
    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a c if my guess is right, with");
    printf("\na h if my guess is higher, and l if my guess is lower\n");
    printf("Uh...is your number %d?\n", guess);
    while ((response = getchar()) != 'c') {
        if (response == 'h') {
            max = guess;
            guess = (min + max) / 2;
            printf("Well, then, is it %d?\n", guess );
        } else if (response == 'l') {
            min = guess;
            guess = (min + max) / 2;
            printf("Well, then, is it %d?\n", guess );
        }
        else
            printf("Sorry, I understand only c, h, or l\n");
        while (getchar() != '\n')
            continue;
    }
    printf("I knew I could do it!\n");
}
