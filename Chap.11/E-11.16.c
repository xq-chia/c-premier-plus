#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int ch;

    while ((ch = getchar()) != EOF) {
        if (argc == 1) {
            putchar(ch);
        } else {
            if (argv[1][1] == 'p') {
                putchar(ch);
            } else if (argv[1][1] == 'u') {
                putchar(toupper(ch));
            } else if (argv[1][1] == 'l') {
                putchar(tolower(ch));
            } else {
                printf("Flag not recognise\n");
                printf("Usage: %s [-p | -u | -l]\n", argv[0]);
                printf("Options:\n");
                printf("  -p:\tDefault, print input as is\n");
                printf("  -u:\tMap input to all uppercase\n");
                printf("  -l:\tMap input to all lowercase\n");
                exit(EXIT_FAILURE);
            }
        }
    }
    return 0;
}
