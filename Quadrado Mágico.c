//Yago Martins Escada
//Este programa recebe a ordem de um quadrado maior do que 3 e devolve um quadrado mágico perfeito
#include <stdio.h>

// A função que gera quadrados mágicos de dimensão impar
void quadradoimpar(int tam)
{
    int quad[tam][tam], soma = 0;

    //Torna todos os pontos da matriz 0
    for(int lin = 0;lin < tam;lin++)
  {
      for(int col = 0;col < tam;col++)
      {

          quad[lin][col] = 0;
      }

  }

    // Inicia a matriz com o numero 1
    int lin = tam / 2;
    int col = tam - 1;

    // Adiciona os numeros no quadrado mágico
    for (int num = 1; num <= tam * tam; )
    {
        //Se a posição da linha for -1 e a posição da coluna for n
        //A nova posição irá se tornar (0,n-2)
        if (lin == -1 && col == tam)
        {
            col = tam-2;
            lin = 0;
        }
        else
        {
            // Caso a coluna se torne igual o tamanho da matriz
            // ele retorna a coluna para 0
            if (col == tam)
            {
                col = 0;
            }

            // Caso a linha se torne negativa
            // ele retorna a linha para o tamanho da matriz - 1
            if (lin < 0)
            {
                lin = tam-1;
            }
        }

        //Se o quadrado mágico ja tiver um numero na posição calculada
        //A posição da coluna é decrementada por 2 e a linha incrementada por 1
        if (quad[lin][col])
        {
            col -= 2;
            lin++;
            continue;
        }
        //Ajusta os numeros dentro do quadrado mágico
        else
        {
            quad[lin][col] = num++;
        }

        //A posição do próximo numero é calculada por incrementar a coluna por um e decrementar a linha por um
        //As condições if(col == n) e if(lin < 0) ajustam  a matriz caso as colunas ultrapassem o tamanho do quadrado ou as linhas se tornem numeros negarivos
        col++, lin--;
    }

    printf("O quadrado mágico de ordem %d é :\n", tam);

    // Printa o quadrado mágico
    for (lin = 0; lin < tam; lin++)
    {
        for (col = 0; col < tam; col++)
        {
            printf("%3d ", quad[lin][col]);
        }
        printf("\n");
    }
    printf("\n");

     // Printa a constante mágica do quadrado
     for(int lin = 0;lin < tam;lin++)
    {
        soma = soma + quad[lin][0];
    }
     printf("Constante mágica = %d\n", soma);
}


// A funcão que gera quadrados mágicos de dimensão par divisiveis por 4
void quadradodivisivel4(int tam)
{
    int quad[tam][tam], lin, col, soma = 0, cont = 0;

    // Põe valores nas posições da matriz começando com 1
     for (lin = 0; lin < tam; lin++)
    {
        for (col = 0; col < tam; col++)
        {
            quad[lin][col] = (tam * lin) + col + 1;
        }
    }

    // Muda o valor de elementos da matriz no local pela regra
    // (tam * tam + 1) - quad[lin][col]


    // Muda o valor do lado esquerdo superior
    // Pela ordem (tam / 4) * (tam / 4)
    for (lin = 0; lin < tam / 4; lin++)
    {
        for ( col = 0; col < tam / 4; col++)
        {
            quad[lin][col] = (tam * tam + 1) - quad[lin][col];
        }
    }

    // Muda o valor do lado direito superior
    // Pela ordem (tam / 4) * (tam / 4)
    for (lin = 0; lin < tam / 4; lin++)
    {
        for (col = 3 * (tam / 4); col < tam; col++)
        {
            quad[lin][col] = (tam * tam + 1) - quad[lin][col];
        }
    }

     // Muda o valor do lado esquerdo inferior
    // ordem (tam / 4) * (tam / 4))
    for (lin = 3 * tam / 4; lin < tam; lin++)
    {
        for (col = 0; col < tam / 4; col++)
        {
            quad[lin][col] = (tam * tam + 1) - quad[lin][col];
        }
    }

    // Muda o valor do lado direito inferior
    // ordem (tam / 4) * (tam / 4)
    for (lin = 3 * tam / 4; lin < tam; lin++)
    {
        for (col = 3 * tam / 4; col < tam; col++)
        {
            quad[lin][col] = (tam * tam + 1) - quad[lin][col];
        }
    }

    // Ajusta o centro da matriz
    //Ordem (tam / 2) * (tam / 2)

    for (lin = tam / 4; lin < 3 * tam / 4; lin++)
    {
        for (col = tam / 4; col < 3 * tam / 4; col++)
        {
            quad[lin][col] = (tam * tam + 1) - quad[lin][col];
        }
    }


    printf("O quadrado mágico de ordem %d é :\n", tam);

    // Printa o quadrado mágico
    for (lin = 0; lin < tam; lin++)
    {
        for (col = 0; col < tam; col++)
        {
            printf("%4d", quad[lin][col]);
        }
        printf("\n");

    }
    printf("\n");

    //Printa a constante mágica do quadrado
    for(lin = 0;lin < tam;lin++)
    {
        soma = soma + quad[lin][0];
    }
     printf("Constante mágica = %d\n", soma);

}

//Função que gera quadrados mágicos divisiveis por dois mas não divisiveis por 4
void quadradodivisivelpor2(int tam)
{
    int quad[tam][tam];
    int aux, k, troca, soma=0, lin, col;
    //k é a ordem dos pequenos quadrados que serão retirados da matriz quad[n][n]

    //Inicia a matriz quad[n][n] com 0 em todas as posições
    for(int lin = 0;lin < tam;lin++)
     {
      for(int col = 0;col < tam;col++)
       {
          quad[lin][col] = 0;
       }

     }

    //Inicialização das variaveis
    k = tam / 2;
    col = (k-1)/2;
    lin = 0;
    quad[lin][col] = 1;

    //Gera o primeiro quadrado A
    for(aux = 2; aux <= k * k; aux++)
    {
       //Se o numero for um multiplo de 3
       if((aux - 1) % k == 0 )
        {
            lin++;
        }
        else
        {
            //Se a linha for 0, então agora a linha será n - 1 ou linha - 1
            lin--;
            lin = (lin + k) % k;

            // Se a col for n, então col será 0 ou col - 1
            col++;
            col %= k;
        }
        quad[lin][col] = aux;
    }

    //Arruma os quadrados A, B, C, D gerados da matriz [n][n]
    for(lin = 0;lin < k; lin++)
    {
        for(col = 0;col < k; col ++)
        {
            quad[lin + k][col + k] = quad[lin][col] + k * k;
            quad[lin][col + k] = quad[lin][col] + 2 * k * k;
            quad[lin + k][col] = quad[lin][col] + 3 * k * k;
        }
    }

    // Troca os quadrados A com C
    for(lin = 0;lin < k;lin++)
    {
        if(lin == k / 2)
        {
            for(col = k / 2; col < k - 1; col++)
            {
                troca = quad[lin][col];
                quad[lin][col] = quad[lin + k][col];
                quad[lin + k][col] = troca;
            }
        }
        else
        {
            for(col = 0;col < k / 2;col++)
            {
                troca = quad[lin][col];
                quad[lin][col] = quad[lin + k][col];
                quad[lin + k][col] = troca;
            }
        }
    }

    //Troca o quadrado B com C
    for(lin = 0; lin < k;lin++)
    {
        for(aux = 0;aux <(k - 1)/2 - 1;aux++)
        {
            troca = quad[lin][k + k / 2 - aux];
            quad[lin][k + k / 2 - aux] = quad[lin + k][k + k / 2 - aux];
            quad[lin + k][k + k / 2 - aux] = troca;
        }
    }
   printf("O quadrado mágico de ordem %d é :\n", tam);
    //Printa o quadrado mágico
    for(lin = 0;lin < tam; lin++)
    {
        for(col = 0;col < tam; col ++)
        {
            printf("%5d",quad[lin][col]);
        }
        printf("\n");
    }
    printf("\n");

   //Printa a constante mágica
   for(lin = 0;lin < tam; lin++)
    {
       soma = soma + quad[lin][0];
    }
   printf("Constante magica = %d\n", soma);
}


int main ()
{
    int tam;
    printf("Insira uma ordem maior do que 3 para o quadrado mágico : ");
    scanf("%d", &tam);
    while(tam < 3)
    {
        printf("A ordem é menor do que 3, insira outra : ");
        scanf("%d", &tam);
    }

     //Caso seja um quadrado mágico de ordem singularmente uniforme
     if(tam % 2 == 0 && tam % 4 != 0)
      {
        quadradodivisivelpor2(tam);
      }

    //Caso seja um quadrado de ordem duplamente uniforme
     else if (tam % 4 == 0)
      {
        quadradodivisivel4(tam);
      }
    //Caso seja um quadrado mágico de ordem ímpar
      else if(tam % 2 != 0 && tam % 4 !=0)
      {
          quadradoimpar(tam);
      }


    return 0;
}
