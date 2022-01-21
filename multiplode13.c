#include <stdio.h>

int main()
{
    int num1, num2 ,soma = 0, div;
    scanf ("%d%d", &num1, &num2);
    if (num1 < num2)
    {
         for (div = num1; div <= num2; div++)
        {
            if (div %13 == 0) continue;
            soma += div;
        }
    }
    else if (num1 > num2)
    {
        for (div = num2; div <= num1; div++)
        {
            if (div % 13 ==0) continue;
            soma += div;
        }
    }
    printf("%d\n", soma);

    return 0 ;
}
