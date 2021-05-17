#include <stdio.h>

void copy_arr(double target_arr[], double source_arr[], int n_element);
void copy_ptr(double target_arr[], double source_arr[], int n_element);
void copy_ptrs(double target_arr[], double source_arr[], double * source_last_element);
void show_arr(double arr[], int n_element);

void main(void) {
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];

    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);

    copy_ptrs(target3, source, source + 5);

    printf("Source[5]: "), show_arr(source, 5);
    printf("Target1[5]: "), show_arr(target1, 5);
    printf("Target2[5]: "), show_arr(target2, 5);
    printf("Target3[5]: "), show_arr(target3, 5);
}

void copy_arr(double target_arr[], double source_arr[], int n_element) {
    int i;

    for (i = 0; i < n_element; i++) {
        target_arr[i] = source_arr[i];
    }
}

void copy_ptr(double target_arr[], double source_arr[], int n_element) {
    int i;

    for (i = 0; i < n_element; i++) {
        *(target_arr + i) = *(source_arr + i);
    }
}

void copy_ptrs(double target_arr[], double source_arr[], double * source_last_element) {
    int i;
    
    i = 0;
    while (source_arr + i < source_last_element) {
        *(target_arr + i) = *(source_arr + i);
        i++;
    }
}

void show_arr(double arr[], int n_element) {
    int i;
    
    for (i = 0; i < n_element; i++) {
        printf("%.1f ", arr[i]);
    }
    printf("\n");
}
