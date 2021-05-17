#include <stdio.h>

void sum_of(int * res, const int * op1, const int * op2, int arr_size);
void show_arr(int col, const int arr[col]);

void main(void) {
    int arr1[] = {2, 4, 5, 8};
    int arr2[] = {1, 0, 4, 6};
    int arr1_size = sizeof arr1 / sizeof arr1[0];
    int arr2_size = sizeof arr2 / sizeof arr2[0];
    int sum_size = arr1_size > arr2_size ? arr1_size : arr2_size;
    int sum[sum_size];

   printf("Content of arr1\n"); 
   show_arr(arr1_size, arr1);
   printf("Content of arr2\n"); 
   show_arr(arr2_size, arr2);
   printf("Content of sum\n"); 
   show_arr(sum_size, sum);

   if (arr1_size == arr2_size) {
       sum_of(sum, arr1, arr2, sum_size);
   }

   printf("After the operation of sum_of()\n");
   printf("Content of arr1\n"); 
   show_arr(arr1_size, arr1);
   printf("Content of arr2\n"); 
   show_arr(arr2_size, arr2);
   printf("Content of sum\n"); 
   show_arr(sum_size, sum);

}

void sum_of(int * res, const int * op1, const int * op2, int arr_size) {
    int i;

    for (i = 0; i < arr_size; ++i) {
        *res++ = *op1++ + *op2++;
    }
}

void show_arr(int col, const int arr[col]) {
    int i;

    printf("[%d", arr[0]);
    for (i = 1; i < col; ++i) {
        printf(", %d", arr[i]);
    }
    printf("]\n");
}
