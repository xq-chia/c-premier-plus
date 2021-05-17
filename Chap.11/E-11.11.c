#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void get_operation(char * operation);
void alphabet_sort(int string_num, int string_len, char stringarr[string_num][string_len]);
void string_len_sort(int string_num, int string_len, char stringarr[string_num][string_len]); 
int first_word_len(char * string);
void fword_len_sort(int string_num, int string_len, char stringarr[string_num][string_len]);

int main(int argc, char *argv[])
{
    const int string_len = 50;
    const int string_num = 10;

    char stringarr[string_num][string_len];
    char * stringptrs[10];
    char operation;

    for (int i = 0; i < 10; i++) {
        stringptrs[i] = stringarr[i];
    }

    printf("Please enter 10 strings to proceed\n");
    for (int i = 0; i < string_num; i++) {
        fgets(stringarr[i], string_len, stdin);
        while (*(stringptrs[i]) != '\0') {
            stringptrs[i]++;
        }
        stringptrs[i]--;
        if (*stringptrs[i] != '\n') {
            fflush(stdin);
        } else {
            *stringptrs[i] = '\0';
        }
        fflush(stdin);
    }

    do {
        get_operation(&operation);

        switch (operation) {
            case 'a':
                for (int i = 0; i < string_num; i++) {
                    printf("%s\n", stringarr[i]);
                }
                break;
            case 'b':
                alphabet_sort(string_num, string_len, stringarr);
                for (int i = 0; i < string_num; i++) {
                    printf("%s\n", stringarr[i]);
                }
                break;
            case 'c':
                string_len_sort(string_num, string_len, stringarr); 
                for (int i = 0; i < string_num; i++) {
                    printf("%s\n", stringarr[i]);
                }
                break;
            case 'd':
                fword_len_sort(string_num, string_len, stringarr);
                for (int i = 0; i < string_num; i++) {
                    printf("%s\n", stringarr[i]);
                }
                break;
            case 'q':
                exit(EXIT_SUCCESS);
                break;
            default:
                printf("Sorry, I don't understand you\n");
                printf("Please enter the valid operation");
                get_operation(&operation);
        }
    } while (true);
}

void get_operation(char * operation) {
    printf("How would you like to sort the strings?\n");
    printf("a. Don't sort\t\t\tb. Sort alphabetically\n");
    printf("c. Sort by string length\tc. Sort by length of first word\n");
    printf("q. quit\n");
    scanf("%c", operation);
    fflush(stdin);
}

void alphabet_sort(int string_num, int string_len, char stringarr[string_num][string_len]) {
    char *start, *end;
    char temp[string_len];

    for (int i = 0; i < string_num; i++) {
        start = stringarr[i];
        for (int j = string_num - 1; end != start; j--) {
            end = stringarr[j];
            if (strcmp(end, start) < 0) {
                strcpy(temp, start);
                strcpy(start, end);
                strcpy(end, temp);
            }
        }
    }
}

void string_len_sort(int string_num, int string_len, char stringarr[string_num][string_len]) {
    char *start, *end;
    char temp[string_len];

    for (int i = 0; i < string_num; i++) {
        start = stringarr[i];
        for (int j = string_num - 1; end != start; j--) {
            end = stringarr[j];
            if (strlen(end) < strlen(start)) {
                strcpy(temp, start);
                strcpy(start, end);
                strcpy(end, temp);
            }
        }
    }
}

int first_word_len(char * string) {
    int len;
    char ch;
    bool inword;

    len = 0;
    inword = false;

    for (int i = 0, ch = string[i]; ch != ' ' && inword; ch = string[++i]) {
        if (inword) {
            if (!isgraph(ch)) {
                return len;
            }
        } else {
            inword = true;
        }
        len++;
    }
}


void fword_len_sort(int string_num, int string_len, char stringarr[string_num][string_len]) {
    char *start, *end;
    char temp[string_len];

    for (int i = 0; i < string_num; i++) {
        start = stringarr[i];
        for (int j = string_num - 1; end != start; j--) {
            end = stringarr[j];
            if (first_word_len(end) < first_word_len(start)) {
                strcpy(temp, start);
                strcpy(start, end);
                strcpy(end, temp);
            }
        }
    }
}
