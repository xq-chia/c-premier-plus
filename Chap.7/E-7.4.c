#include <stdio.h>

void main(void) {
    char ch;
    int subs = 0;

    while ((ch = getchar()) != '#') {
        if (ch == '.') {
            putchar('!');
            subs++;
        } else if (ch == '!') {
            printf("!!");
            subs++;
        }
        else
            putchar(ch);
    }
    printf("%d substitutions has been made.\n", subs);
}
