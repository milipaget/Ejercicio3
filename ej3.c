#include <stdio.h>

int suma_digitos (int n1);

int main (void)
{
	int n1=256;			
	printf("%d\n",suma_digitos(n1));	//imprime el resultado de la funcion
	return 0;
}

int suma_digitos (int n1)
{
	//Este es el caso base.
	if(n1==0)
	{
		return 0;
	}
	//Caso recursivo.
	else 
	{
		//Obtiene el digito que se desea sumar y busca el siguiente realizando  
		//la misma funcion con el digito siguiente.
		return ((n1 % 10) + suma_digitos(n1 / 10));    
	}
}

/*
a) El objetivo de la funcion es todos los digitos de un numero
b) No funciona porque no hace referencia a un caso base, ademas llama a la funcion digitos cuando la funcion se llama suma_digitos
*/
