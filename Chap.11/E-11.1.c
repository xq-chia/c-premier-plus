#include <stdio.h>
#define ARR_SIZE 20

void my_get(int n, char arr[]);

void main(void) {
    char arr[ARR_SIZE];
    
    my_get(ARR_SIZE, arr);

    printf("%s\n", arr);
}

void my_get(int n, char arr[]) {
    int i;
    for (i = 0; i < n; i++) {
        arr[i] = getchar();
    }
    arr[n - 1] = '\0';
}
