#include <stdio.h>

int main() 
{
int n;
printf("Ingrese un n�meros:\n");

    while (1) 
	{
        scanf("%d", &n);

        if (n< 0) 
		{
            printf("El numero que ingreso es negativo\n");
            break;
        }
        printf("N�mero ingresado: %d\n", n);
    }

    return 0;
}


