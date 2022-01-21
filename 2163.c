#include <stdio.h>
int main()
{
    int linha, coluna, i, j, x = 0, n = 0, m = 0;
    scanf("%d %d", &linha, &coluna);
    int vet [linha] [coluna];
    for(i = 0; i < linha; ++i)
        for(j = 0; j < coluna; ++j)
            scanf("%d", &vet [i] [j]);

    for(i = 1; i < linha - 1; ++i)
    {
        for(j = 1; j < coluna - 1; ++j)
        {
            if(vet [i] [j] == 42)
                if(vet [i - 1] [j - 1] == 7 && vet [i - 1] [j] == 7 && vet [i - 1][j + 1] == 7)
                    if(vet [i] [j - 1] == 7 && vet [i] [j + 1] == 7)
                        if(vet [i + 1] [j - 1] == 7 && vet [i + 1] [j] == 7 && vet [i + 1] [j + 1] == 7)
                        {
                            x = 1;
                            n = i + 1;
                            m = j + 1;
                        }
        }
    }
    printf("%d %d\n", n, m);
    return 0;
}
