#include <stdio.h>
#include <ctype.h>

void main(void) {
    int ch;

    while((ch = getchar()) != EOF) {
        while (getchar() != '\n') {
            getchar();
        }

        if (isalpha(ch)) {
            printf("%c is a letter", ch);
            if (isupper(ch)) {
                printf(", with a numerical location of %d in the alphabet\n", ch - 'A');
           } else
                printf(", with a numerical location of %d in the alphabet\n", ch - 'a');
        } else
                printf("%c is not a letter\n", ch);
    }
}
