#include <stdio.h>
#include <ctype.h>

void main(void) {
    int ch;
    int count;

    count = 0;
    while ((ch = getchar()) != EOF) {
        if (ch >= ' ') {
            printf("'%c': %03d\t", ch, ch);
        } else if (ch = '\n') {
            printf("\n");
            printf("'\\n': %03d\t", ch);
            printf("\n");
            count = 0;
        } else if (ch = '\t') {
            printf("'\\t': %03d\t", ch);
        } else {
            printf("'^%c': %03d\t", ch + 64, ch);
        }

        count++;
        if (count == 10) {
            printf("\n");
        }
    }
}
