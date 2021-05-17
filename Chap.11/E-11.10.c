#include <stdio.h>
#include <string.h>
#include <ctype.h>

void rm_space(char * string);

int main(int argc, char *argv[])
{
    char string[50];
    char *sptr;

    sptr = string;

    printf("Please enter a string to remove space in between\n");
    fgets(string, 50, stdin);
    while (*sptr != '\0') {
        sptr++;
    }
    sptr--;
    if (*sptr != '\n') {
        fflush(stdin);
    } else {
        *sptr = '\0';
    }

    printf("Content of string before rm_space()\n");
    printf("%s\n", string);

    rm_space(string);

    printf("Content of string after rm_space()\n");
    printf("%s\n", string);

    return 0;
}

void rm_space(char * string) {
    char *pre, *pos;

    pre = string, pos = string; 
    while (*pos != '\0') {
        if (isspace(*pre)) {
            pre++;
        } else {
            *pos = *pre;
            pre++;
            pos++;
        }
    }
}
