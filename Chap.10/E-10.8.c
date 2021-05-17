#include <stdio.h>

void copy_ptr(double target_arr[], double source_arr[], int n_element);
void show_arr(double arr[], int n_element);

void main(void) {
    double source[7] = {5.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2};
    double target[3];

    copy_ptr(target, &source[4], 3);
    show_arr(target, 3);
}

void copy_ptr(double target_arr[], double source_arr[], int n_element) {
    int i;

    for (i = 0; i < n_element; i++) {
        *(target_arr + i) = *(source_arr + i);
    }
}

void show_arr(double arr[], int n_element) {
    int i;
    
    for (i = 0; i < n_element; i++) {
        printf("%.1f ", arr[i]);
    }
    printf("\n");
}
