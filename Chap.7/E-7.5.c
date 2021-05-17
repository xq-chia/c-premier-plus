#include <stdio.h>

void main(void) {
    char ch;
    int subs = 0;

    while ((ch = getchar()) != '#') {
        switch (ch) {
            case '.':
                putchar('!');
                subs++;
                break;
            case '!':
                printf("!!");
                subs++;
                break;
            default:
                putchar(ch);
                break;
        }
    }
    printf("%d substitutions has been made.\n", subs);
}
