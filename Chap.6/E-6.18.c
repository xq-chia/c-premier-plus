#include <stdio.h>
#define DUNBAR 150

void main(void) {
    int friend = 5, week = 1;

    while (friend <= DUNBAR) {
        friend -= week;
        friend *= 2;
        printf("On week %d, Prof. Radnud has %d friends.\n", week, friend);
        week++;
    }
}
