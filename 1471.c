#include <stdio.h>
#define MAX 10000

int main()
{

	int identidade [MAX], mergulhou, voltou, i, n;

	while (scanf ("%d %d", &mergulhou, &voltou) != EOF)
 {
		if (voltou == mergulhou)
        {
			printf ("*\n");
			for (i = 0 ;i < voltou ; i++)
			{
				scanf ("%d", &n);
				identidade [n - 1]++;
			}
		}
		 else
        {
			for (i = 0;i < mergulhou; i++)
			{
				identidade [i] = 0;
			}
			for (i = 0;i < voltou; i++)
			{
				scanf ("%d", &n);
				identidade [n - 1]++;
			}
			for (i = 0;i < mergulhou; i++)
            {
              if(identidade [i]== 0)
              {
					printf("%d ", i + 1);
              }

		}
		printf ("\n");
	}
 }
	return 0;
}
