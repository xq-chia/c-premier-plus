#include <stdio.h>
#include "E-12.3.h"

void set_mode(int mode) {
    if (mode != -1 && mode != 0 && mode != 1) {
       printf("Invalid mode specified. Mode 1(US) used.\n");
    }
}

void get_info(int mode, float * pt_distance, float * pt_fuel) {
    if (!mode) {
        printf("Enter distance traveled in kilometers: ");
        scanf("%f", pt_distance);

        printf("Enter fuel consumed in liters: ");
        scanf("%f", pt_fuel);
    } else {
        printf("Enter distance traveled in miles: ");
        scanf("%f", pt_distance);

        printf("Enter fuel consumption in gallons: ");
        scanf("%f", pt_fuel);
    }
}

void show_info(int mode, float distance, float fuel) {
    float gas_consumption;

    if (!mode) {
        gas_consumption = fuel / distance * 100;
        printf("Fuel consumption is %.2f liters per 100 km.\n", gas_consumption);
    } else {
        gas_consumption = distance / fuel;
        printf("Fuel consumption is %.1f miles per gallon.\n", gas_consumption);
    }
}
