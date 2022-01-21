#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if (b<a && c<b)
        {
        printf("%d\n%d\n%d\n", c, b, a);
        }
    else if (a<b && c<a)
        {
        printf("%d\n%d\n%d\n", c, a, b);
    }
    else if (b<c && a<b)
        {
        printf("%d\n%d\n%d\n", a, b, c);
    }
    else if (a<c && b<a)
        {
        printf("%d\n%d\n%d\n", b, a, c);
    }
    else if (c<a && b<c)
        {
        printf("%d\n%d\n%d\n", b, c, a);
    }
    else if(c<b && a<c)
        {
        printf("%d\n%d\n%d\n", a, c, b);
    }
        printf("\n");
        printf("%d\n%d\n%d\n", a, b, c);

        return 0 ;
}
