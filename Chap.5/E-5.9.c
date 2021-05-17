#include <stdio.h>

void Temperatures(double fahr);

void main(void) {
    double input;

    printf("Please enter the Fahrenheit value: ");

    while(scanf("%lf", &input) == 1) {
        Temperatures(input);
        printf("Please enter the Fahrenheit value(q to exit): ");
    }
}

void Temperatures(double fahr) {
    double celsius, kelvin;
    const float f2c_conv = 5.0 / 9.0;
    const float f2c_offset = 32.0;
    const float c2k_offset = 273.16;

    celsius = f2c_conv - (fahr - f2c_offset);
    kelvin = celsius + c2k_offset;

    printf("Fahrenheit: %.2f\n", fahr);
    printf("Celsius: %.2f\n", celsius);
    printf("Kelvin: %.2f\n", kelvin);
}
