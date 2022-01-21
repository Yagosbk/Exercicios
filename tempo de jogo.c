#include <stdio.h>
int main()
{
    int tempomaximo,inicio,fim;
    tempomaximo = 24;
    scanf("%d %d", &inicio, &fim);
    if (inicio>fim)
    {
        tempomaximo = (tempomaximo - inicio) + fim;
        printf("O JOGO DUROU %d HORA(S)",tempomaximo);
    }
    else if (inicio<fim)
    {
        tempomaximo = fim - inicio;
        printf("O JOGO DUROU %d HORA(S)",tempomaximo);
    }
    else if (inicio == fim)
    {
        printf("O JOGO DUROU %d HORA(S)",tempomaximo);
    }

       return 0;
}
