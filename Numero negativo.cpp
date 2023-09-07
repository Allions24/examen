#include <stdio.h>

int main() 
{
int n;
printf("Ingrese un números:\n");

    while (1) 
	{
        scanf("%d", &n);

        if (n< 0) 
		{
            printf("El numero que ingreso es negativo\n");
            break;
        }
        printf("Número ingresado: %d\n", n);
    }

    return 0;
}


