#include <stdio.h>
#define g2l 3.785
#define m2km 1.609

void main(void) {
    float mile, gallon, mpg;
    float km, litre, lp100km;

    printf("Please enter distance traveled(mile): ");
    scanf("%f", &mile);

    printf("Please enter gasoline comsumed(gallon): ");
    scanf("%f", &gallon);

    mpg  = mile / gallon;
    printf("The miles-per-gallon value is %.1f\n", mpg);

    km = mile / g2l;
    litre = gallon / m2km;
    lp100km = litre / (100 * km);
    printf("The litre-per-100-km value is %.1f\n", lp100km);
}
