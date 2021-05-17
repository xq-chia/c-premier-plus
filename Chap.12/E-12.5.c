#include <stdio.h>
#include <time.h>

#define ARR_SIZE 100

static unsigned long int next;

unsigned int random10(void);
void des_sort(int arr_size, int arr[arr_size]);

void main(void) {
    int random[ARR_SIZE];
    int i;

    next = (unsigned int) time(0);

    for (i = 0; i < ARR_SIZE; ++i) {
        random[i] = random10();
    }

    des_sort(ARR_SIZE, random);

    for (i = 0; i < ARR_SIZE; ++i) {
        printf("%d ", random[i]);
    }
    printf("\n");
}

unsigned int random10(void) {
    next = next * 1103515245 + 12345;
    return (unsigned int) (next / 65536) % 10 + 1;
}

void des_sort(int arr_size, int arr[arr_size]) {
    int i, j;
    int temp;

    for (i = 0; i < arr_size - 1; ++i) {
        for (j = i + 1; j < arr_size; ++j) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
