#include <stdio.h>

int main()
{
int n;
printf("dame la cantidad de numeros a analizar: ");
scanf("%d", &n);
int lista[n];
printf("dame los numeros:\n");
int i = 0;
while (i < n) 
	{
	scanf("%d", &lista[i]);
	i++;
    }
printf("los numeros impares son:");
i = 0;
while (i < n) 
{
if (lista[i] % 2 != 0) 
	{
  		printf("%d ", lista[i]);
	}
        i++;
}
    printf("\n");

    return 0;
}
