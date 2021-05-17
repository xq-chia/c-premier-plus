#include <stdio.h>

void copy_arr(double target_arr[], double source_arr[], int n_element);
void show_arr(double arr[], int n_element);

void main(void) {
    double source[2][12] = 
    {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6}, 
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3}
    };
    double target[2][12];

    copy_arr(target[0], source[0], 12);
    copy_arr(target[1], source[1], 12);

    show_arr(target[0], 12);
    show_arr(target[1], 12);

}

void copy_arr(double target_arr[], double source_arr[], int n_element) {
    int i;

    for (i = 0; i < n_element; i++) {
        target_arr[i] = source_arr[i];
    }
}

void show_arr(double arr[], int n_element) {
    int i;
    
    for (i = 0; i < n_element; i++) {
        printf("%.1f ", arr[i]);
    }
    printf("\n");
}
