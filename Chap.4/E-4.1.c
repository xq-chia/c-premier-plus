#include <stdio.h>

void main(void) {
    char fname[20];
    char lname[20];

    printf("Please enter your first name: ");
    scanf("%s", fname);

    printf("Please enter your last name: ");
    scanf("%s", lname);

    printf("%s, %s\n", lname, fname);
}
