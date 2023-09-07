#include <stdio.h>

#include <stdio.h>

int main() 
{
int n;
int i = 1;
printf("Ingrese un número: ");
scanf("%d", &n);
printf("Tabla de multiplicar de %d:\n", n);

    while (i <= 10) 
	{
        int resultado = n* i;
        printf("%d x %d = %d\n", n, i, resultado);
        i++;
    }

    return 0;
}
