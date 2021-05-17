#include <stdio.h>
#include <ctype.h>

void first_word_only(char arr[], int n);

void main(void) {
    char arr[20];

    first_word_only(arr, 20);

    printf("%s\n", arr);
}

void first_word_only(char arr[], int n) {
    int ch;
    int i;

    while (isspace(ch = getchar())) {
        continue;
    }

    i = 0;
    while (i < n - 1) {
        if (!isspace(ch)) {
            arr[i] = ch;
        } else {
            arr[i] = '\0';
        }
        i++;
        ch = getchar();
    }
    arr[i] = '\0';
}
