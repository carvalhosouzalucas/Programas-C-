#include <stdio.h>

int main ()
{
	int num;
	printf("Informe o numero:\n");
	scanf("%d", &num);
	if (num % 5 == 0)
	   printf("O n�mero %d � divis�vel por 5\n", num);
	else
	   printf("O n�mero %d n�o � divis�vel por 5\n", num);
	   
	   
	return (0);
}
