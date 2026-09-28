#include <stdio.h>

int main(void) {
    int primeiro, segundo;
    printf("Primeiro número: ");
    sacnf("%d", &primeiro);
    printf("Segundo número: ");
    sacnf("%d", &segundo);

    if (primeiro > segundo) {
        printf("Maior: %d\n", primeiro);
    }else (segundo > primeiro) {
        printf("Maior: %d\n", segundo);
    }else {
        printf("Os dois números são iguais. \n");
    }
    return 0;
}