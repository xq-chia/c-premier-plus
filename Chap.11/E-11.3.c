#include <stdio.h>
#include <ctype.h>

void first_word_only(char arr[]);

void main(void) {
    char arr[20];

    first_word_only(arr);

    printf("%s\n", arr);
}

void first_word_only(char arr[]) {
    int ch;
    int i;
    int n_element;

    while (isspace(ch = getchar())) {
        continue;
    }

    i = 0;
    n_element = sizeof arr / sizeof arr[0];
    while (i < n_element - 1) {
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
