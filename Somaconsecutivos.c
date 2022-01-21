#include <stdio.h>

int main()

{
int x, y;
while(scanf("%d", &x) && x!=0)
{
y = 0;
if(x%2!=0)
x++;
for(int z = 0; z <= 4; z++, x += 2)
y += x;
printf("%d\n", y);
}
return 0;

}
