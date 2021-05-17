#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int word_num;
    char *(*string);

    printf("How many words do you wish to enter? ");
    scanf("%d", &word_num);
    fflush(stdin);
    string = (char **) malloc(word_num * sizeof (char *));

    for (int i = 0; i < word_num; i++) {
        char *word = (char *) malloc(10 * sizeof (char));
        scanf("%s", word);
        string[i] = word;
    }

    printf("Here are your words:\n");
    for (int i = 0; i < word_num; i++) {
        printf("%s\n", string[i]);
    }
    return 0;
}
