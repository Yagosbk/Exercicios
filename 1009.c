#include <stdio.h>
int main ()
{
    char nome[] = "";
    float salario , vendas, salariofinal;
    scanf("%s", &nome);
    scanf("%f", &salario);
    scanf("%f", &vendas);

    salariofinal = salario + (vendas * 0.15);
    printf("TOTAL = R$%.2f\n", salariofinal);
    return 0;
}
