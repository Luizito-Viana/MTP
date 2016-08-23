#include <stdio.h>

int main()
{
	int x;
	printf("Digite um Numero: ");
	scanf("%d",&x);
	printf("\n\n");
	if(x%2==0)
        printf("O numero e par\n");
    else
        printf("O numero e impar\n");
    if(x%3==0)
        printf("E multiplo de 3\n");
    else
        printf("Nao e multiplo de 3\n");
    if(x%5==0)
        printf("E multiplo de 5\n");
    else
        printf("Nao e multiplo de 5\n");
    if(x%7==0)
        printf("E multiplo de 7\n");
    else
        printf("Nao e multiplo de 7\n");
	return 0;
}
