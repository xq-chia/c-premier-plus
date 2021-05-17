#include <stdio.h>
#include <ctype.h>

#define ARR_SIZE 20

void my_get(int n, char arr[]);

void main(void) {
    char arr[ARR_SIZE];
    
    my_get(ARR_SIZE, arr);

    printf("%s\n", arr);
}

void my_get(int n, char arr[]) {
    int i;

    i = 0;
    while (!isspace(arr[i] = getchar()) && i < n - 1) {
        i++;
    }
    arr[i] = '\0';
}
