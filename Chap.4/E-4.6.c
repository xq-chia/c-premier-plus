#include <stdio.h>
#include <string.h>

void main(void) {
    char fname[20], lname[20];

    printf("Please enter your first name: ");
    scanf("%s", fname);

    printf("Please enter your last name: ");
    scanf("%s", lname);

    printf("%s %s\n", fname, lname);
    printf("%*d %*d\n", strlen(fname), strlen(fname), strlen(lname), strlen(lname));

    printf("%s %s\n", fname, lname);
    printf("%-*d %-*d\n", strlen(fname), strlen(fname), strlen(lname), strlen(lname));
}
