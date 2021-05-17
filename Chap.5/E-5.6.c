#include <stdio.h>

int main(void) {
    int count, sum;
    int end;

    count = 0;
    sum = 0;

    printf("Please enter the ending number: ");
    scanf("%d", &end);

    while (count++ < end)
        sum = sum + count * count;
    printf("sum = %d\n", sum);

    return 0;
}
