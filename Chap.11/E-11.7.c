#include <stdio.h>
#include <stdbool.h>

char * mystrncpy(char * target, const char * source, int n);

void main(void) {
    char arr1[20], arr2[20];
    char * pt1 = arr1, * pt2 = arr2;
    char input;
    bool quit;

    do {
        printf("Please enter the string to store in arr1: ");
        fgets(arr1, 20, stdin);
        while (*pt1 != '\0') {
            pt1++; 
        }
        pt1--;
        if (*pt1 != '\n') {
            while (getchar() != '\n')
                continue;
        }
        printf("Please enter the string to store in arr2: ");
        fgets(arr2, 20, stdin);
        while (*pt2 != '\0') {
            pt2++; 
        }
        pt2--;
        if (*pt2 != '\n') {
            while (getchar() != '\n')
                continue;
        }

        printf("arr1: %s\n", arr1);
        printf("arr2: %s\n", arr2);

        printf("Copying arr2 to arr1...\n");
        mystrncpy(arr1, arr2, 20);

        printf("arr1: %s\n", arr1);
        printf("arr2: %s\n", arr2);

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

char * mystrncpy(char * target, const char * source, int n) {
    char * ret = target;

    while (*source && n-- != 0) {
        *target++ = *source++;
    }
    if (n > 0) {
        *target = '\0';
    }
    return ret;
}
