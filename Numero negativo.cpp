#include <stdio.h>

int main() 
{
int n;
printf("dame un números:\n");

    while (1) 
	{
        scanf("%d", &n);

        if (n< 0) 
		{
            printf("El numero que me dio es negativo\n");
            break;
        }
        printf("Número dado: %d\n", n);
    }

    return 0;
}


