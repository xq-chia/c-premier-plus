#include <stdio.h>

void draw_rect(char character, int width, int height);

void main(void) {
    char ch;
    int width, height;

    printf("Please enter the character for drawing the rectangle: ");
    scanf("%c", &ch);
    printf("Please enter width of the rectangle: ");
    scanf("%d", &width);
    printf("Please enter height of the rectangle: ");
    scanf("%d", &height);

    draw_rect(ch, width, height);
}

void draw_rect(char ch, int w, int h) {
    int i, j;

    for (i = 0; i < h; i++) {
        for (j = 0; j < w; j++) {
            putchar(ch);
        }
        printf("\n");
    }
}
