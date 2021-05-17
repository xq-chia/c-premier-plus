#include <stdio.h>

void my_function(int repeat);

void main(void)
{
    int repeat;

    printf("How many times would you like the function to repeat: ");
    scanf("%d", &repeat);

    my_function(repeat);
}

void my_function(int repeat) {
    int i;
    static int called;

    called = 1;

    for (i = 0; i < repeat; ++i, ++called) {
        printf("I'm called for %d time%s\n", called, called == 1 ? "" : "s");
    }
}
