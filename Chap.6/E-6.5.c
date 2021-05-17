#include <stdio.h>

void main(void) {
    int i;
    int row;
    int c_row;
    char ch, pattern;

    printf("Please enter the pattern: ");
    scanf("%c", &pattern);

    row = pattern - 'A' + 1;

    for (c_row = 1; c_row <= row; c_row++) {
        for (i = c_row; i < row; i++) {
            // space
            printf(" ");
        }
        for (i = 0; i < c_row; i++) {
            // ascending letter
            ch = 'A' + i;
            printf("%c", ch);
        }
        for (--ch; ch >= 'A'; --ch) {
            // descending letter
            printf("%c", ch);
        }
        printf("\n");
    }
}
