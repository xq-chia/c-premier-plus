#include <stdio.h>

double range_of(double arr[], int n_element);

void main(void) {
    double arr[] = {32.0, 21.4, 456.1, 148.0, 159.0, 1.315, 4.035};
    printf("The difference between the largest element and smallest element is %f\n",
            range_of(arr, 7));
}

double range_of(double arr[], int n_element) {
    int i;
    double largest, smallest;

    largest = *(arr), smallest = *(arr); 
    i = 0;
    while (i < n_element) {
        if (*(arr + i) > largest) {
            largest = *(arr + i);
        }
        if (*(arr + i) < smallest) {
            smallest = *(arr + i);
        }
        i++;
    }
    return (largest - smallest);
}
