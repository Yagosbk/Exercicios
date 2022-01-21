#include <stdio.h>
int main()
{
    int N, i, j, m, k, l;
    for (;;)
        {
        scanf("%d",&N);
        if (N == 0)
        break;
        int vet [N] [N];
        m = 1;
        for(i = 0;i < N;i++)
        {
            m = i + 1;
            k = 2;
            for(j = 0;j <= i;j++,m--)
            {
                vet [i] [j] = m;
            }
            for(j = i + 1;j < N;j++,k++)
            {
                vet [i] [j] = k;
            }
            m++;
        }
        for(i = 0;i < N;i++)
        {
            for(j = 0;j < N;j++){
                if(j == 0)
                printf("%3d",vet [i] [j]);
                else
                printf(" %3d",vet [i] [j]);
            }
    printf("\n");
        }
        printf("\n");
    }
    return 0;
}
