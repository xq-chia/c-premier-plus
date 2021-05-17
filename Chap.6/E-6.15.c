#include <stdio.h>
#define SIZE 255

void main(void) {
    int i;
    char string[SIZE];
    
    printf("Please enter the line to be reversed.\n");

    i = 0;
    do {
        scanf("%c", &string[i]);
    } while (string[i++] != '\n');

    for (i -= 2; i >= 0; i--) {
        printf("%c", string[i]);
    }
    printf("\n");
}
