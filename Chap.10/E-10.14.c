
#include <stdio.h>

void get_arr(int row, int col, double arr[row][col]);
void show_arr(int row, int col, const double arr[row][col]);
void average_of_set(int col, int set, const double arr[col]);
double average_arr(int row, int col, const double arr[row][col]);
double max(int row, int col, const double arr[row][col]);

void main(void) {
    double arr[3][5];

    get_arr(3, 5, arr);

    printf("Content of arr\n");
    show_arr(3, 5, arr);

    for (int i = 0; i < 3; ++i) {
        average_of_set(5, i + 1, *(arr + i));
    }

    printf("Average of all the double number is: %lf\n", average_arr(3, 5, arr));

    printf("Maximum number in the array is: %lf\n", max(3, 5, arr));
}

void get_arr(int row, int col, double arr[row][col]) {
    int i, j;

    printf("Please enter three sets of five double numbers\n");
    for (i = 0; i < row; ++i, ++arr) {
        for (j = 0; j < col; ++j) {
            printf("Set %d, Element %d: ", i + 1, j + 1);
            scanf("%lf", *arr + j);
        }
    }
}

void show_arr(int row, int col, const double arr[row][col]) {
    int i, j;

    printf("[\n");
    for (i = 0; i < row; ++i, ++arr) {
        for (j = 0; j < col; ++j) {
            if (j == 0) {
                printf("[%lf", *(*arr + j));
            } else {
                printf(", %lf", *(*arr + j));
            }
        }
        printf("]\n");
    }
    printf("]\n");
}

void average_of_set(int col, int set, const double arr[col]) {
    int i;
    double total;

    for (i = 0, total = 0; i < col; ++i) {
        total += arr[i];
    }
    
    printf("Average of Set %d: %lf\n", set, total / col);
}

double average_arr(int row, int col, const double arr[row][col]) {
    int i, j;
    double total;

    for (i = 0, total = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            total += arr[i][j];
        }
    }

    return total / (row * col);
}

double max(int row, int col, const double arr[row][col]) {
    int i, j;
    int max;

    for (i = 0, max = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    return max;
}
