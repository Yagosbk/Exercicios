#include <stdio.h>
int main()
{
   int x, y;

   while(scanf ("%d", &x) && x != 0)
   {
       y = 0;

       if(y % 2 != 0)
        x++;

       for (int z = 0; z <=4 ; x +=2)
            y += x;

       printf("%d", &y);



   }



    return 0;
}








