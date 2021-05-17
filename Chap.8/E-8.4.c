#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void main(void) {
    int ch;
    int letter, word;
    float avg;
    bool inword;

    letter = 0, word = 0;
    inword = false;
    while ((ch = getchar()) != EOF) {
        if (isalnum(ch)) {
            letter++;
        }
        if (!isspace(ch) && !inword) {
            inword = true;
            word++;
        }
        if (isspace(ch) && inword) {
            inword = false; 
        }
    }
    avg = (float) letter / word;
    printf("The total number of letters in the input is %d\n", letter);
    printf("The total number of words in the input is %d\n", word);
    printf("The average number of letter per word is %.2f\n", avg);
}
