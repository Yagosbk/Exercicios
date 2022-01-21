#include<stdio.h>

int main ()
{
	int t, i, s, n, j, menor, indice;
	int qt[10], x[10];

	scanf("%d", &t);
	for(i = 1; i <= t; i++)
        {
		scanf("%d", &n);
		scanf("%d", &s);
		for(j=1; j<=n; j++)
		{
			scanf ("%d", &qt[j]);
			x [j] = abs (qt [j] - s);
		}

		menor = 101;
		for(j = 1; j <= n; j++){
			if (qt [j] == s)
            {
				indice = j;
				break;

			}
			else if (menor > x [j])
			{
				menor= x[j];
				indice = j;
			}
		}
		printf("%d\n", indice);
	}
	return 0;
}
