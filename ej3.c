#include <stdio.h>

int suma_digitos (int n1);

int main (void)
{
	int n1=256;
	printf("%d\n",suma_digitos(n1));
	return 0;
}

int suma_digitos (int n1)
{
	return ((n1 % 10) + digitos(n1 / 10)); //caso recursivo
}
