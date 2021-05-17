#include <stdio.h>
#include "E-12.2.h"

static int mode;
static float distance;
static float  fuel;

void set_mode(int new_mode) {
    extern int mode;

    if (mode != new_mode) {
        mode = new_mode;
    }
    if (mode != -1 && mode != 0 && mode != 1) {
       printf("Invalid mode specified. Mode 1(US) used.\n");
    }
}

void get_info(void) {
    extern int mode;
    extern float distance;
    extern float fuel;

    if (!mode) {
        printf("Enter distance traveled in kilometers: ");
        scanf("%f", &distance);

        printf("Enter fuel consumed in liters: ");
        scanf("%f", &fuel);
    } else {
        printf("Enter distance traveled in miles: ");
        scanf("%f", &distance);

        printf("Enter fuel consumption in gallons: ");
        scanf("%f", &fuel);
    }
}

void show_info(void) {
    extern int mode;
    extern float distance;
    extern float fuel;
    float gas_consumption;

    if (!mode) {
        gas_consumption = fuel / distance * 100;
        printf("Fuel consumption is %.2f liters per 100 km.\n", gas_consumption);
    } else {
        gas_consumption = distance / fuel;
        printf("Fuel consumption is %.1f miles per gallon.\n", gas_consumption);
    }
}
