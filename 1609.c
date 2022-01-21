#include<stdio.h>
int vet [10000];
int main()
{
     int test, n, i, j, tmp, t;
     scanf("%d", &test);
     while(test--)
        {
         int tmp = 0;
         scanf("%d", &n);
         for(i = 0;i < n; i++)
         {
         scanf("%d", &vet [i]);
         tmp++;
         }
            int t = 0;
            for(i = 0;i < n; i++)
            {
            t = vet [i];
            for(j = i + 1;j < n; j++)
            {
              if(t == vet [j])
              {
                tmp = tmp - 1;
                 break;
              }
            }
            }

            printf("%d\n", tmp);
        }

    return 0;
}
