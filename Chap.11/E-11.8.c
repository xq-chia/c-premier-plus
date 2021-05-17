#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char * string_in(char * string, char * pattern);

void main(void) {
    char string[20], pattern[5];
    char * pt1, * pt2;
    char * res;
    char input;
    bool quit;

    pt1 = string, pt2 = pattern;

    do {
        printf("Please enter the text: ");
        fgets(string, 20, stdin);
        while (*pt1 != '\0') {
            pt1++; 
        }
        pt1--;
        if (*pt1 != '\n') {
            while (getchar() != '\n')
                continue;
        } else {
            *pt1 = '\0';
        }
        printf("Please enter the pattern to search for: ");
        fgets(pattern, 20, stdin);
        while (*pt2 != '\0') {
            pt2++; 
        }
        pt2--;
        if (*pt2 != '\n') {
            while (getchar() != '\n')
                continue;
        } else {
            *pt2 = '\0';
        }
        
        printf("string (possible truncation due to excess characters): %s%s",
                string, string[strlen(string) - 1] == '\n' ? "" : "\n");
        printf("pattern (possible truncation due to excess characters): %s%s",
                pattern, pattern[strlen(pattern) - 1] == '\n' ? "" : "\n");
        printf("Looking for '%s' from '%s'\n", pattern, string);

        res = string_in(string, pattern);
        if (res) {
            printf("'%s' is found at location %td\n", pattern, res - string +1);
        } else {
            printf("'%s' is not found\n", pattern);
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

char * string_in(char * string, char * pattern) {
    bool same_pattern;
    char * ret;

    while (*string && *pattern) {
        if (*string == *pattern) {
            if (!same_pattern) {
                ret = string;
                same_pattern = true;
            }
            pattern++;
        } else {
            same_pattern = false;
        }
        string++;
    }

    if (same_pattern) {
        return ret;
    } else {
        return NULL;
    }
}
