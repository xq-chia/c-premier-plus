#include <stdio.h>
#include <ctype.h>

void main(void) {
    char ch;
    int counter;

    ch = 0;
    while ((ch = getchar()) != '#') {
        if (counter++ % 8 == 0) {
            printf("\n");
        }
        if (isprint(ch)) {
            printf("\'%c\': %03d\t", ch, ch);
        }
    }
    printf("\n");
}
