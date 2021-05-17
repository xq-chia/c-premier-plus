#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int word, upper, lower, punc, digit;
    bool inword;
    char ch;

    word = 0, upper = 0, lower = 0, punc = 0, digit = 0;
    inword = false;

    printf("Enter random text to calculate the number of words, uppercase letters, lowercase\n");
    printf("letters, punctuations, and digits\n");

    while ((ch = getchar()) != EOF) {
        if (inword) {
            if (isspace(ch)) {
                inword = false;
                word++;
            } else if (isupper(ch)) {
                upper++;
            } else if (islower(ch)) {
                lower++;
            } else if (ispunct(ch)) {
                punc++;
            } else if (isdigit(ch)) {
                digit++;
            }
        } else {
            if (!isspace(ch)) {
                inword = true;
            }
        }
    }

    return 0;
}
