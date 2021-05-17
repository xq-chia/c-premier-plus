#include <stdio.h>
#include <stdbool.h>

void main(void) {
    int category;
    float income;
    int tax_break;
    float tax;

    while (true) {
        category = 0;
        do {
            printf("Please enter your tax category:\n");
            printf("1) Single\t\t\t2) Head of Household\n");
            printf("3) Married, Joint\t\t4) Married, Separate\n");
            printf("5) quit\n");
            printf("Category: ");
            scanf("%d", &category);

            switch (category) {
                case 1:
                    tax_break = 17850;
                    break;
                case 2:
                    tax_break = 23900;
                    break;
                case 3:
                    tax_break = 29750;
                    break;
                case 4:
                    tax_break = 14875;
                    break;
                case 5:
                    return;
                default:
                    printf("Error detected. Please enter a valid selection\n");
                    break; 
            }
        } while (category == 0 || category > 4);

        income = 0.0;
        do {
        printf("Please enter your taxable income: ");
        scanf("%f", &income);
        printf("\n");

        if (income <= 0.0) {
            printf("Error detected. Please enter a valid taxable income, input must greater than zero\n");
        }
        } while (income <= 0.0);

        tax = 0.15 * income;
        if (income > tax_break) {
            tax += 0.13 * (income - tax_break);
        }

        printf("$%.2f of tax was charged\n", tax);
        printf("----------------------------------------------------\n");
    }
}
