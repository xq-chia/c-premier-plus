#include <stdio.h>
#include <ctype.h>

void main(void) {
    int ch;
    int upper, lower, other;

    upper = 0, lower = 0, other = 0;
    while ((ch = getchar()) != EOF) {
        if (isupper(ch)) {
            upper++;
        } else if (islower(ch)) {
            lower++;
        } else {
            other++;
        }
    }
    printf("There %s %d uppercase letter%s in the input\n", 
            upper > 1 ? "are" : "is", upper, upper > 1 ? "s" : "");
    printf("There %s %d lowercase letter%s in the input\n", 
            lower > 1 ? "are" : "is", lower, lower > 1 ? "s" : "");
    printf("There %s %d other character%s in the input\n", 
            other > 1 ? "are" : "is", other, other > 1 ? "s" : "");
}
