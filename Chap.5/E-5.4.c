#include <stdio.h>

void main(void) {
    float cm, inch;

    printf("Enter a height in centimeters: ");
    scanf("%f", &cm);

    while (cm > 0) {
        inch = cm / 2.54;
        printf("%f\n", (int) inch % 12);
        printf("%.1f cm = %d feet, %.1f inches\n", cm, (int) (inch / 12), inch - ((int) (inch / 12)) * 12);

        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%f", &cm);
    }
    printf("bye\n");
}
