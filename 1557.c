#include<stdio.h>
int main()
{
  long long int i, j, k, n, l, m;
    while(scanf("%lld",&n))
        {
        l = 1;
        if( n == 0)
        break;
       long long int vet [n] [n];
        for(i = 0;i < n;i++)
        {
            k = l;
            for(j = 0;j < n;j++){
                vet [i] [j] = k;
                k += k;
            }
            l += l;
        }
        for(i = 0;i < n;i++)
            {
            for(j = 0;j < n;j++)
            {
                if(n == 3 || n == 4)
                {
                       if(j==0)
                       printf("%2lld",vet [i] [j]);
                       else
                       printf(" %2lld",vet [i] [j]);
                }
                else if(n == 5)
                {
                       if(j == 0)
                       printf("%3lld",vet [i] [j]);
                       else
                       printf(" %3lld",vet [i] [j]);
                }
                else if(n == 6 || n == 7)
                {
                       if(j == 0)
                       printf("%4lld",vet [i] [j]);
                       else
                       printf(" %4lld",vet [i] [j]);
                }
                else if(n == 8 || n == 9)
                {
                       if(j == 0)
                       printf("%5lld",vet [i] [j]);
                       else
                       printf(" %5lld",vet [i] [j]);
                }
                else if(n == 10)
                {
                       if(j == 0)
                       printf("%6lld",vet [i] [j]);
                       else
                       printf(" %6lld",vet [i] [j]);
                }
                else if(n == 11 || n == 12)
                {
                       if(j == 0)
                       printf("%7lld",vet [i] [j]);
                       else
                       printf(" %7lld",vet [i] [j]);
                }
                else if(n == 13 || n == 14)
                {
                       if(j == 0)
                       printf("%8lld",vet [i] [j]);
                       else
                       printf(" %8lld",vet [i] [j]);
                }
                else if(n == 15)
                {
                       if(j == 0)
                       printf("%9lld",vet [i] [j]);
                       else
                       printf(" %9lld",vet [i] [j]);
                }
                else if(n == 1)
                printf("%1lld",vet [i] [j]);
                else if(n == 2)
                {
                    if(j == 0)
                    printf("%lld",vet [i] [j]);
                    else
                    printf(" %lld",vet [i] [j]);
                }
            }
        printf("\n");
        }
        printf("\n");
    }
    return 0;
}
