#include <stdio.h>
void leitura(int mat[4][4])
{
     for(int i = 0;i < 4;i++)
    {
        for(int j = 0;j < 4;j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

void imprime(int mat[4][4])
{
     for(int i = 0;i < 4;i++)
    {
        for(int j = 0;j < 4;j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void somaquad(int mat[4][4])
{
    int soma = 0;
     for(int i = 0;i < 4;i++)
    {
        int k = 0;
        soma = soma + mat[i][0]*mat[i][0];
        k++;
    }
     printf("%d\n", soma);
}

void somaterc(int mat[4][4])
{
    int soma = 0;
    for(int i = 0;i < 4;i++)
    {
            soma = soma + mat[2][i];
    }
    printf("%d\n", soma);
}

void somadiag(int mat[4][4])
{
    int soma = 0;
    for(int i = 0;i < 4;i++)
    {
            soma = soma + mat[i][i];
    }
    printf("%d\n", soma);
}

void par(int mat[4][4])
{
    int soma = 0;
  for(int j = 0;j < 4;j++)
    {
            if(j%2 == 0)
            {
                soma = soma + mat[1][j];
            }
    }
    printf("%d\n", soma);
}

void mult(int mat[4][4])
{
    int mult = 1;
    for(int i = 0;i < 4;i++)
    {
        for(int j = 0;j < 4;j++)
        {
            if(i - j == 3)
            {
                mult = mult * mat[i][j];
            }
        }
    }
    printf("%d\n", mult);
}

int main ()
{
 int n, d, m[4][4];
 do{
 scanf("%d", &n);
 switch(n)
 {
 case 1:
  leitura(m);
 break;
 case 2:
  imprime(m);
 break;
 case 3:
  somaquad(m);
 break;
 case 4:
  somaterc(m);
 break;
 case 5:
    somadiag(m);
 break;
 case 6:
    par(m);
 break;
 case 7:
     mult(m);
 break;
}
 }while(n != 0);
 return 0;
}
