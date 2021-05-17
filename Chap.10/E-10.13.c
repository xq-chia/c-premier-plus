#include <stdio.h>

#define ROWS 3
#define COLS 5

void get_arr(double arr[ROWS][COLS]);
void show_arr(const double arr[ROWS][COLS]);
void average_of_set(int set, const double arr[COLS]);
double average_arr(const double arr[ROWS][COLS]);
double max(const double arr[ROWS][COLS]);

void main(void) {
    double arr[3][5];

    get_arr(arr);

    printf("Content of arr\n");
    show_arr(arr);

    for (int i = 0; i < 3; ++i) {
        average_of_set(i + 1, *(arr + i));
    }

    printf("Average of all the double number is: %lf\n", average_arr(arr));

    printf("Maximum number in the array is: %lf\n", max(arr));
}

void get_arr(double arr[ROWS][COLS]) {
    int i, j;

    printf("Please enter three sets of five double numbers\n");
    for (i = 0; i < ROWS; ++i, ++arr) {
        for (j = 0; j < COLS; ++j) {
            printf("Set %d, Element %d: ", i + 1, j + 1);
            scanf("%lf", *arr + j);
        }
    }
}

void show_arr(const double arr[ROWS][COLS]) {
    int i, j;

    printf("[\n");
    for (i = 0; i < ROWS; ++i, ++arr) {
        for (j = 0; j < COLS; ++j) {
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

void average_of_set(int set, const double arr[COLS]) {
    int i;
    double total;

    for (i = 0, total = 0; i < COLS; ++i) {
        total += arr[i];
    }
    
    printf("Average of Set %d: %lf\n", set, total / COLS);
}

double average_arr(const double arr[ROWS][COLS]) {
    int i, j;
    double total;

    for (i = 0, total = 0; i < ROWS; ++i) {
        for (j = 0; j < COLS; ++j) {
            total += arr[i][j];
        }
    }

    return total / (ROWS * COLS);
}

double max(const double arr[ROWS][COLS]) {
    int i, j;
    int max;

    for (i = 0, max = 0; i < ROWS; ++i) {
        for (j = 0; j < COLS; ++j) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    return max;
}
