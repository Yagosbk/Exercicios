#include <stdio.h>
#define MAX 100

int main ()
{
    char nota [MAX];
    int i;
    double notatotal = 0, alunos = 0;

    scanf("%s", &nota);

    for (i = 0; nota [i] != '\0'; i++)
    {
    	if (nota [i] == '1' && nota[i + 1] == '0')    /*caso a nota seja 10 ele adiciona na nota total*/
        {
        	notatotal += 10, i++;
        }
        else
        {
        	notatotal += nota[i] - '0'; /*caso a nota não seja 10 ele adiciona o número desconsiderando o possível zero que venha frente*/
        }

        alunos++;
    }

    printf("%.2f\n", notatotal / alunos);

    return 0;
}
