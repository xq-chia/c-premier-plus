#include <stdio.h>
#include <string.h>

void main(void) {
    char fname[20];

    printf("Please enter your first name: ");
    scanf("%s", fname);

    printf("\"%s\"\n", fname);
    printf("\"%20s\"\n", fname);
    printf("\"%-20s\"\n", fname);
    printf("\"%*s\"\n", strlen(fname) + 3, fname);
}
