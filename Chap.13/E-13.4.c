#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int file_num;
    char *filename;
    FILE *fp;
    char ch;

    file_num = argc - 1;

    if (argc < 2) {
        printf("Usage: %s filename1 filename2 ...\n", argv[0]);
        exit(EXIT_FAILURE);
    } else {
        for (int i = 0, index = 1; i < file_num; i++, index++) {
            filename = argv[index];
            printf("Reading %s\n", filename);
            if ((fp = fopen(filename, "r")) == NULL) {
                printf("Unable to open %s for reading\n", filename);
                exit(EXIT_FAILURE);
            } else {
                while ((ch = getc(fp)) != EOF) {
                    putchar(ch);
                }
                putchar('\n');
            }
        }
    }

    return 0;
}
