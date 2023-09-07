#include <stdio.h>

int main() 
{
    int n;
	int suma = 0;

    printf("Ingrese un numero: ");
    scanf("%d", &n);
    while (n > 0) 
	{
        int digito = n % 10; 
        suma += digito;
        n /= 10; 
    }

    printf("La suma de los digitos es: %d\n", suma);

    if (n < 0)
	{
        printf("no es posible sumar numeros negativos\n");
    }

  
    return 0;
}
