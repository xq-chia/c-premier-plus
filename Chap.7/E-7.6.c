#include <stdio.h>

void main(void) {
    char ch, pre_ch;
    int count;
    
    count = 0, pre_ch = ' ';
    while ((ch = getchar()) != '#') {
        if (ch == 'i' && pre_ch == 'e') {
            count++;
        }
        pre_ch = ch;
    }
    printf("The sequence \'ei\' occurs %d time%s\n", count, count > 1 ? "s.": ".");
}
