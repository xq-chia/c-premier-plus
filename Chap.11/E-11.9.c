#include <stdio.h>
#include <stdbool.h>

void reverse(char * string);

void main(void) {
    char arr1[20];
    char * pt1 = arr1;
    char input;
    bool quit;

    do {
        printf("Please enter the text to be reversed: ");
        fgets(arr1, 20, stdin);
        while (*pt1 != '\0') {
            pt1++; 
        }
        pt1--;
        if (*pt1 != '\n') {
            while (getchar() != '\n')
                continue;
        } else {
            *pt1 = '\0';
        }

        printf("arr1(possible truncation due to excess characters): %s\n", arr1);
        
        reverse(arr1);
        printf("arr1 after reversed: %s\n", arr1);
        
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

void reverse(char * string) {
    char temp;
    char * head;
    int n_char;
    int i;
    
    head = string;
    n_char = 0;

    while (*string != '\0') {
        string++;
        n_char++;
        continue;
    }
    string--;

    for (i = 0; i < n_char / 2; i++) {
        temp = *head;
        *head = *string;
        *string = temp;

        head++;
        string--;
    }
}
