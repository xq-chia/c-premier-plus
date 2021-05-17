#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *source, *dest;
    char ch;
    
    if (argc != 3) {
        printf("Usage: %s sourcefile destinationfile\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((source = fopen(argv[1], "rb")) == NULL) {
        printf("Unable to open %s source file for reading\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((dest = fopen(argv[2], "wb")) == NULL) {
        printf("Unable to open %s destination file for writing\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(source)) != EOF) {
        putc(ch, dest);   
    }
    
    if (fclose(source) != 0) {
        printf("Unable to close %s source file\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if (fclose(dest) != 0) {
        printf("Unable to close %s destination file\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    return 0;
}
