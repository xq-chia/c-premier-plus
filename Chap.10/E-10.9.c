#include <stdio.h>

void cpy_arr(int row, int col, double target[row][col], const double source[row][col]);
void show_arr(int row, int col, const double arr[row][col]);

void main(void) {
    double source[][5] = 
    {
        {4.3, 4.3, 4.3, 3.0, 2.0}, 
        {8.5, 8.2, 1.2, 1.6, 2.4}, 
        {9.1, 8.5, 6.7, 4.3, 2.1}
    };
    double target[3][5];

    printf("The content of source\n");
    show_arr(3, 5, source);
    printf("The content of target\n");
    show_arr(3, 5, target);

    cpy_arr(3, 5, target, source);

    printf("The content of source after cpy_arr()\n");

    printf("The content of source\n");
    show_arr(3, 5, source);
    printf("The content of target\n");
    show_arr(3, 5, target);
}

void cpy_arr(int row, int col, double target[row][col], const double source[row][col]) {
    int i, j;

    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            target[i][j] = source[i][j];
        }
    }
}

void show_arr(int row, int col, const double arr[row][col]) {
    int i, j;

    for (i = 0; i < row; ++i) {
        if (i == 0) {
           printf("[\n"); 
        }
        for (j = 0; j < col; ++j) {
            if (j == 0) {
                printf("[%.1f", arr[i][j]);
            } else {
                printf(", %.1f", arr[i][j]);
            }
        }
        printf("],\n");
    }
    printf("]\n");
}
