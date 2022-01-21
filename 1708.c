#include <stdio.h>
#include <math.h>

void main ()
{

	float lento, rapido;
	float voltas;
	scanf("%f %f", &lento, &rapido);
	voltas = rapido - lento;
	voltas = rapido / voltas;
	printf("%.f\n", ceil(voltas));
}
