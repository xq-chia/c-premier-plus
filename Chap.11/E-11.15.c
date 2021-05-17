#include <stdio.h>

int my_atoi(const char *ch);

int main(int argc, char *argv[])
{
    printf("A = %d\n", my_atoi("A"));
    printf("512 = %d\n", my_atoi("512"));
    return 0;
}

int my_atoi(const char *ch)
{
    int i;
    int res, place;

    res = 0, place = 1;
    i = 0;
    while (ch[i] != '\0') {
        i++;
    }
    i--;
    for (; i >= 0; i--) {
        switch (ch[i]) {
            case '0':
                res += 0 * place;
                place *= 10;
                break;
            case '1':
                res += 1 * place;
                place *= 10;
                break;
            case '2':
                res += 2 * place;
                place *= 10;
                break;
            case '3':
                res += 3 * place;
                place *= 10;
                break;
            case '4':
                res += 4 * place;
                place *= 10;
                break;
            case '5':
                res += 5 * place;
                place *= 10;
                break;
            case '6':
                res += 6 * place;
                place *= 10;
                break;
            case '7':
                res += 7 * place;
                place *= 10;
                break;
            case '8':
                res += 8 * place;
                place *= 10;
                break;
            case '9':
                res += 9 * place;
                place *= 10;
                break;
            default:
                printf("This is not an pure number\n");
                return 0;
        }
    }
    return res;
}
