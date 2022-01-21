#include <stdio.h>
int main(){

int pewdiepiesubs, tseriessubs, subgap;
scanf("%d %d", &pewdiepiesubs, &tseriessubs);

if (pewdiepiesubs == tseriessubs)
    printf( "the sub count difference is %d\n", 0);
else if (pewdiepiesubs > tseriessubs)
    printf("the sub count difference is %d\n", pewdiepiesubs - tseriessubs);
else if (tseriessubs > pewdiepiesubs)
    printf("the sub count difference is %d\n", tseriessubs - pewdiepiesubs);
return 0;



}
