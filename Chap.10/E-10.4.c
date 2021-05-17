#include <stdio.h>

int index_of_largest(double arr[], int n_element);

void main(void) {
    double arr[] = {13.5, 1.09, 4.35, 83.1, -9.631};
    printf("The index of the largest element in the array is %d\n",
            index_of_largest(arr, 5));
}

int index_of_largest(double arr[], int n_element) {
    int i;
    int larger_index;
    double larger;

    larger = 0;
    i = 0;
    while (i < n_element) {
        if (*(arr + i) > larger) {
            larger = *(arr + i);
            larger_index = i;
        }
        i++;
    }
    return larger_index;
}
