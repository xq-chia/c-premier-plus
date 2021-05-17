#include <stdio.h>

void main(void) {
    int age;
    
    printf("Please enter your age: ");
    scanf("%d", &age);
    printf("You have lived %e seconds on the world\n", age * 3.156E7);
}
