#include <stdio.h>
#include <stdbool.h>

char * mystrchr(char * string, char ch);

void main(void) {
    char string[20];
    char *pt = string;
    char target;
    char * res;
    char input;
    bool quit;

    do {
        printf("Please enter the searching string: ");
        fgets(string, 20, stdin);
        while (*pt != '\0') {
           pt++; 
        }
        pt--;
        if (*pt != '\n') {
            while (getchar() != '\n')
                continue;
        }
        printf("Please enter the character to search for: ");
        target = getchar();
        while (getchar() != '\n') {
            continue;
        }
        
        printf("Finding %c from %s (possible truncation of excess character)...", target, string);

        res = mystrchr(string, target);
        if (res) {
            printf("%c is found on location %td\n", target, res - string + 1);
        } else {
            printf("%c is not found\n", target);
        }

        printf("Would you like to continue? (y/n)");
        input = getchar();
        while (getchar() != '\n') {
            getchar();
        } 
        quit = false;
        do {
            switch (input) {
                case 'y':
                    break;
                case 'n':
                    quit = true;
                    break;
                default:
                    printf("Please enter 'n' to quit or 'y' to continue: ");
                    input = getchar();
                    while (getchar() != '\n') {
                        getchar();
                    } 
                    continue;
            }
        } while (input != 'y' && input != 'n');
    } while (!quit);
}

char * mystrchr(char * string, char ch) {
    while (*string != '\0') {
        if (*string != ch) {
            string++;
        } else
            return string;
    }
    return NULL;
}
