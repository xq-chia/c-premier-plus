#include <stdio.h>
#define RATE 10
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

    tax = 0.0, net_pay = 0.0;

    printf("Please enter the number of hours worked in a week: ");
    scanf("%d", &time);

    gross_pay = time * RATE;
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
