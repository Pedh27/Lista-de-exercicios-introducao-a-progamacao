#include <stdio.h>

int main(void) {
    double salario, bonus, total;
    printf("Salario base (ex.: 1500.00): ");
    sacntf("%lf", &salario);
    printf("Bônus em porcentagem: ");
    sacnf("%lf", &bonus);
    
    if (salario < 0 || bonus < 0) {
        printf("Valores inválidos. \n");
        return 0;
    }
    total = salario + salario * bonus / 100;
    printf("Salário final: R$ %.2f\n", total);
    return 0;
}