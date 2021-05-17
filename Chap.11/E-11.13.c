#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("Usage: %s [string]...\n", argv[0]);
        exit(EXIT_FAILURE);
    } else
        for (int i = argc - 1; i != 0; i--) {
            printf("%s ", argv[i]);
        }
    putchar('\n');
    return 0;
}
