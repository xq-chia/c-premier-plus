#include <stdio.h>

void chline(char character, int start, int end);

void main(void) {
    char ch;
    int start, end;

    printf("Please enter the character you wish to print: ");
    scanf("%c", &ch);
    printf("Starts at: col ");
    scanf("%d", &start);
    printf("Ends at: col ");
    scanf("%d", &end);

    chline(ch, start, end);
    printf("\n");
}

void chline(char ch, int i, int j) {
    int col;

    for (col = 0; col < i; col++) {
        printf(" ");
    }

    for (; col <= j; col++) {
        putchar(ch);
    }
}
