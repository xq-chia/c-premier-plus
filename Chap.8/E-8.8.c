#include <stdio.h>

float get_first_operand(void);
float get_second_operand(void);
void get_operand(float * op1_add, float * op2_add);

void main(void) {
    int ch;
    float f1, f2;

    do {
        printf("Enter the operation of your choice:\n");
        printf("a. add\t\ts. subtract\n");
        printf("m. multiply\t d.divide\n");
        printf("q. quit\n");
        ch = getchar();
        
        while (getchar() != '\n') {
            getchar();
        }

        switch (ch) {
            case 'a':
                get_operand(&f1, &f2);
                printf("%f + %f = %f\n", f1, f2, f1 + f2);
                break;
            case 's':
                get_operand(&f1, &f2);
                printf("%f - %f = %f\n", f1, f2, f1 - f2);
                break;
            case 'm':
                get_operand(&f1, &f2);
                printf("%f * %f = %f\n", f1, f2, f1 * f2);
                break;
            case 'd':
                get_operand(&f1, &f2);
                while (f2 == 0) {
                    printf("Enter a number other than 0: ");
                    scanf("%f", &f2);
                }
                while (getchar() != '\n') {
                    getchar();
                }
                printf("%f / %f = %f\n", f1, f2, f1 / f2);
                break;
            case 'q':
                printf("Bye\n");
                return;
        }
    } while (ch != 'a' || ch != 's' || ch != 'm' || ch != 'd' || ch != 'q');
}

float get_first_operand() {
    float input;

    printf("Enter first number: ");
    while (scanf("%f", &input) != 1) {
        while ((input = getchar()) != '\n') {
            putchar(input);
        }
        printf(" is not an number.\n");
        printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
    }
    return input;
}

float get_second_operand() {
    float input;
    
    printf("Enter second number: ");
    while (scanf("%f", &input) != 1) {
        while ((input = getchar()) != '\n') {
            putchar(input);
        }
        printf(" is not an number.\n");
        printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
    }
    return input;
}

void get_operand(float * op1_add, float * op2_add) {
    *op1_add = get_first_operand();
    *op2_add = get_second_operand();

    while (getchar() != '\n') {
        getchar();
    }
}
