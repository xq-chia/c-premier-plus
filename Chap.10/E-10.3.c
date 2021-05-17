#include <stdio.h>

int largest_element(int arr[], int n_element);

void main(void) {
    int arr[] = {598, 564, 13, 89, -9, 74};
    printf("%d\n", largest_element(arr, 6));
}

int largest_element(int arr[], int n_element) {
    int i;
    int larger;

    larger = 0;
    i = 0;
    while (i < n_element) {
        if (*(arr + i) > larger) {
            larger = *(arr + i);
        }
        i++;
    }
    return larger;
}
