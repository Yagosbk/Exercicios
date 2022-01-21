#include<stdio.h>
int main()
{
    int i, j ,c = 0;
    int k = 11;
    float M [12][12], s = 0;
    char o;
    scanf("%c",&o);
    for(i  =0 ; i < 12 ; i++)
    {
        for(j = 0 ; j < 12 ; j++)
        {
            scanf("%f",&M[i][j]);
        }
    }
    for(i = 1 ; i < 12 ; i++)
    {
        for(j = 0 ; j < 12 ; j++)
        {
            if(j >= k)
            {
                s += M[i][j];
                c++;
            }

        }
        k--;
    }
    if(o == 'S')
        printf("%.1f\n",s);
    else
        printf("%.1f\n",s/c);

    return 0;
}
