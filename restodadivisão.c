#include <stdio.h>
int main()
{
    int num1, num2, valor;
    scanf("%d%d", &num1, &num2);
    if(num1 < num2)
    {
        for(valor=num1 + 1; valor < num2; valor++)
        {
            if(valor % 5 == 2 || valor % 5 == 3)
                printf("%d\n", valor);
        }
    }
    else if(num1 > num2)
    {
        for(valor = num2 + 1; valor < num1; valor++)
        {
            if(valor % 5 == 2 || valor % 5 == 3)
                printf("%d\n", valor);
        }
    }
    return 0;
}
