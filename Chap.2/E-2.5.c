#include <stdio.h>

void br(void);
void ic(void);

main(void){
    br();
    printf(", ");
    ic();
    printf("\n");

    ic();
    printf(",\n");

    br();
    printf("\n");
}

void br(void) {
    printf("Brazil, Russia");
}

void ic(void) {
    printf("India, China");
}
