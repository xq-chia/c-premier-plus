#include <stdio.h>
#define COLS 5

void show_arr(const int arr[][COLS], int row);
void double_arr(int arr[][COLS], int row);

void main(void) {
    int arr[][5] = 
    {
        {4, 4, 4, 3, 2}, 
        {8, 8, 1, 1, 2}, 
        {9, 8, 6, 4, 2}
    };
    int row = sizeof arr / sizeof arr[0];

    printf("Content of arr\n");
    show_arr(arr, row);

    double_arr(arr, row);

    printf("Content of arr after the operation of double_arr()\n");
    show_arr(arr, row);

}

void show_arr(const int arr[][COLS], int row) {
    int i, j;

    for (i = 0; i < row; ++i) {
        if (i == 0) {
           printf("[\n"); 
        }
        for (j = 0; j < COLS; ++j) {
            if (j == 0) {
                printf("[%.1d", arr[i][j]);
            } else {
                printf(", %.1d", arr[i][j]);
            }
        }
        printf("],\n");
    }
    printf("]\n");
}

void double_arr(int arr[][COLS], int row) {
    int i, j;

    for (i = 0; i < row; ++i) {
        for (j = 0; j < COLS; ++j) {
            arr[i][j] *= 2;
        }
    }
}
