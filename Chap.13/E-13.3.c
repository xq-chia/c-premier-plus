#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    FILE *source, *dest;
    char ch;
    char sourcefile[50], destfile[50];

    printf("Please enter the source file to copy from\n");
    scanf("%s", sourcefile);
    getchar();
    printf("Please enter the destination file to copy to\n");
    scanf("%s", destfile);
    getchar();

    if ((source = fopen(sourcefile, "rb")) == NULL) {
        printf("Unable to open %s source file for reading\n", sourcefile);
        exit(EXIT_FAILURE);
    }
    if ((dest = fopen(destfile, "wb")) == NULL) {
        printf("Unable to open %s destination file for writing\n", destfile);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(source)) != EOF) {
        putc(ch, dest);   
    }
    
    if (fclose(source) != 0) {
        printf("Unable to close %s source file\n", sourcefile);
        exit(EXIT_FAILURE);
    }
    if (fclose(dest) != 0) {
        printf("Unable to close %s destination file\n", destfile);
        exit(EXIT_FAILURE);
    }

    return 0;
}
