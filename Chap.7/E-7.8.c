#include <stdio.h>
#define OPTION1 8.75
#define OPTION2 9.33
#define OPTION3 10.00
#define OPTION4 11.20
#define OT_RATE 1.5
#define OVERTIME 40
#define TAX1 0.15
#define BREAK1 300
#define TAX2 0.20
#define BREAK2 450
#define TAX3 0.25

void main(void) {
    int time;
    float gross_pay, tax, net_pay;
    char input;
    float rate;

    rate = 0.0;
    do {
        printf("*****************************************************************\n");
        printf("Enter the number corresponding to the desired pay rate or action:\n");
        printf("1) %.2f/hr\t\t2) $%.2f/hr\n", OPTION1, OPTION2); 
        printf("3) $%.2f/hr\t\t4) $%.2f/hr\n", OPTION3, OPTION4); 
        printf("5) quit\n");
        printf("*****************************************************************\n");
        
        scanf("%d", &input);
        switch (input) {
            case 1:
                rate = 8.75;
                break;
            case 2:
                rate = 9.33;
                break;
            case 3:
                rate = 10.00;
                break;
            case 4:
                rate = 11.20;
                break;
            case 5:
                return;
            default:
                continue;
        }
    } while (rate == 0.0);

    if (rate) {
        tax = 0.0, net_pay = 0.0;

        printf("Please enter the number of hours worked in a week: ");
        scanf("%d", &time);

        gross_pay = time * rate;
        if (time > OVERTIME) {
            gross_pay += (time - OVERTIME) * (OT_RATE - 1);
        }

        tax = gross_pay * TAX1;
        if (gross_pay > BREAK1) {
            tax += (gross_pay - BREAK1) * (TAX2 - TAX1);
        } else if (gross_pay > BREAK2) {
            tax += (gross_pay - BREAK2) * (TAX3 - TAX2 - TAX1);
        }
        
        net_pay = gross_pay - tax;

        printf("Your gross pay for %d hour%s of work is %.2f\n",
                time, time > 1 ? "s" : "", gross_pay);
        printf("A tax of $%.2f was charged\n", tax);
        printf("Leaving a balance of $%.2f of net pay\n", net_pay);
    }
}
