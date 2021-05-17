#include <stdio.h>

void reverse_arr(double arr[], int n_element);
void show_arr(double arr[], int n_element);

void main(void) {
    double arr[] = {32.0, 21.4, 456.1, 148.0, 159.0, 1.315, 4.035};

    reverse_arr(arr, 7);
    show_arr(arr, 7);
}

void reverse_arr(double arr[], int n_element) {
    int i, j;
    double temp;

    for (i = 0, j = n_element - 1; i != j; i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void show_arr(double arr[], int n_element) {
    int i;
    
    for (i = 0; i < n_element; i++) {
        printf("%f ", arr[i]);
    }
    printf("\n");
}
