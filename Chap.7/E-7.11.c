#include <stdio.h>
#include <ctype.h>

#define ARTICHOKE 2.05
#define BEET 1.15
#define CARROT 1.09
#define SHIPPING1 6.50
#define SHIPPING2 14.00
#define SHIPPING3 0.5
#define SHIP1_UP 5
#define SHIP2_UP 20
#define DISCOUNT 0.05
#define DISCOUNT_MIN 100

void main(void) {
    char item;
    float artichoke, beet, carrot;
    float temp;
    float charges, discount, shipping, grand_total;
    float weight;

    artichoke = 0, beet = 0, carrot = 0;
    discount = 0.0;
    do {
        printf("Please choose the vegetable you wish to purchase\n");
        printf("a: Artichokes\tb: Beets\n");
        printf("c: Carrots\n");
        printf("q: Proceed to payment\n");
        printf("Choice: ");
        item = getchar();

        switch (tolower(item)) {
            case 'a':
                printf("How much of artichokes would you like: ");
                scanf("%f", &temp);
                artichoke += temp;
                break;
            case 'b':
                printf("How much of beets would you like: ");
                scanf("%f", &temp);
                beet += temp;
                break;
            case 'c':
                printf("How much of carrots would you like: ");
                scanf("%f", &temp);
                carrot += temp;
                break;
            case 'q':
                charges = artichoke * ARTICHOKE + beet * BEET + carrot * CARROT;
                weight = artichoke + beet + carrot;
                if (weight <= SHIP1_UP) {
                    shipping = SHIPPING1;
                } else if (weight >  SHIP1_UP || weight < SHIP2_UP) {
                    shipping = SHIPPING2;
                } else if (weight >= SHIP2_UP) {
                    shipping = SHIPPING2 * SHIP2_UP + SHIPPING3 * (weight - SHIP2_UP);
                }
                if (charges > DISCOUNT_MIN) {
                    discount = charges * DISCOUNT;
                }
                grand_total = charges + shipping - discount;

                printf("Vegetable\tPrice\t\tWeight\tCost\n"
                       "---------------------------------------------\n"
                       "Artichokes\t%.2f/lbs\t%.2f\t%.2f\n"
                       "Beets\t\t%.2f/lbs\t%.2f\t%.2f\n"
                       "Carrot\t\t%.2f/lbs\t%.2f\t%.2f\n",
                       ARTICHOKE, artichoke, artichoke * ARTICHOKE,
                       BEET, beet, beet * BEET,
                       CARROT, carrot, carrot * CARROT);
                printf("\n");
                printf("\t\t\tTotal cost     :$%.2f\n", charges);
                printf("\t\t\tDiscount       :$%.2f\n", discount);
                printf("\t\t\tShipping charge:$%.2f\n", shipping);
                printf("\t\t\tGrand total    :$%.2f\n", grand_total);
                break;
            case '\n':
                break;
            default:
                printf("Error detected. Please enter a valid choice\n");
        }
    } while (item != 'q');
}
