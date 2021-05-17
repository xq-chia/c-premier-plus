#include <stdio.h>

void main(void) {
    int year;
    float daphne = 100, deirdre = 100;

    for (year = 0; daphne >= deirdre; year++) {
        daphne += 100 * 0.1;
        deirdre *= 1.05;
    }
    printf("After %d year,\n", year);
    printf("Daphne has $%.2f\n", daphne);
    printf("Deirdre has $%.2f\n", deirdre);
}
