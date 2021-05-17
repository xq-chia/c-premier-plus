#include <stdio.h>
#include <string.h>

void main(void) {
    int i;
    char string[20];

    printf("Please enter the word to spell backward: ");
    scanf("%s", string);

    for (i = strlen(string) - 1; i >= 0; --i) {
        printf("%c", string[i]);
    }
    printf("\n");
}
