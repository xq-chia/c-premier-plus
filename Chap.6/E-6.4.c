#include <stdio.h>
#define ROWS 6

void main(void) {
    int row, col;
    char i = 'A';

    for (row = 1; row <= ROWS; row++) {
        for (col = 0; col < row; col++, i++) {
            printf("%c", i);
        }
        printf("\n");
    }
}
