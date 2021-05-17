#include <stdio.h>
#include <ctype.h>

char get_first(void);

void main(void) {
    int ch;

    printf("%c\n", ch = get_first());
}

char get_first(void){
    int ch;
    while (!isalnum(ch = getchar()))
        continue;
    while (getchar() != '\n')
        continue;
    return ch;
} 
