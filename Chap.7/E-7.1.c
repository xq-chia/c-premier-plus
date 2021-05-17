#include <stdio.h>

void main(void) {
    char ch;
    int nb, nl, nc;

    nb = 0, nl = 0, nc = 0;
    while ((ch = getchar()) != '#') {
        switch (ch) {
            case ' ':
                nb++;
                break;
            case '\n':
                nl++;
                break;
            default:
                nc++;
                break;
        }
    }

    printf("Number of blanks: %d\n", nb);
    printf("Number of lines: %d\n", nl);
    printf("Number of characters: %d\n", nc);
}
