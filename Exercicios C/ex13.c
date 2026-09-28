#include <stdio.h>

int main(void) {
    int inicio;
    printf("Iniciar contagem regreciva em: ")
    sacnf("%d", &inicio)

    if (inicio < 0) {
        printf("Informe um número não negativo. \n")
        return 0;
    }
    for (int numero = inicio; numero >= 0; numero--) {
        printf("%d\n", numero);
    }
    printf("Fim da contagem. \n")
    return 0;
}