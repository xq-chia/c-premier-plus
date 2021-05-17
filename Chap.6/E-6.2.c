#include <stdio.h>
#define ROW 5

void main(void) {
    int i, j;

    for (i = 1; i <= ROW; ++i) {
        for (j = 0; j < i; ++j) {
            printf("$");
        }
        printf("\n");
    }
}
