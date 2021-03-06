#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 4096
#define SLEN 81

void append(FILE *souce, FILE *dest);
char * s_gets(char *st, int n);

int main(int argc, char *argv[])
{
    FILE *fa, *fs;
    int files = 0;
    char file_app[SLEN];
    char file_src[SLEN];
    
    if (argc < 3) {
        printf("Usage: %s destinationfile sourcefile1 sourcefile2 ...\n", argv[0]);
        exit(EXIT_FAILURE);
    } else {
        strcpy(file_app, argv[1]);
        if ((fa = fopen(file_app, "a+")) == NULL) {
            fprintf(stderr, "Can't open %s\n", file_app);
            exit(EXIT_FAILURE);
        }
        if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0) {
            fputs("Can't create output buffer\n", stderr);
            exit(EXIT_FAILURE);
        }

        for (int i = 2; i < argc; i++) {
            strcpy(file_src, argv[i]);
            if (strcmp(file_src, file_app) == 0) {
                fputs("Can't append file to itself\n", stderr);
            } else if ((fs = fopen(file_src, "r")) == NULL) {
                fprintf(stderr, "Can't open %s\n", file_src);
            } else {
                if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0) {
                    fputs("Can't create input buffer\n", stderr);
                    continue;
                }
                append(fs, fa);
                if (ferror(fs) != 0) {
                    fprintf(stderr, "Error in reading file %s.\n", file_src);
                }
                if (ferror(fa) != 0) {
                    fprintf(stderr, "Error in writing file %s.\n", file_app);
                }
                fclose(fs);
                files++;
                printf("File %s appended.\n", file_src);
            }
        }
        printf("Done appending %d files appended.\n", files);
        rewind(fa);
        printf("%s contents:\n", file_app);
        puts("Done displaying.");
        fclose(fa);
    }

    return 0;
}

void append(FILE *source, FILE *dest) {
    size_t bytes;
    static char temp[BUFSIZE];

    while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0) {
        fwrite(temp, sizeof(char), bytes, dest);
    }
}

char * s_gets(char *st, int n) {
    char *ret_val;
    char *find;

    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        find = strchr(st, '\n');
        if (find) {
            *find = '\0';
        } else {
            while (getchar() != '\n') {
                continue;
            }
        }
    }
    return ret_val;
}
