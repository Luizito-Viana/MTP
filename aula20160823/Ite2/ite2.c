#include <stdio.h>
#include <time.h>

int main()
{
    int base, exp, pot , i;
    printf("Digite o valor da base: \n");
	scanf("%d",&base);
	printf("Digite o valor do expoente: \n");
	scanf("%d",&exp);
	pot = base;
	for (i=exp; i>1; i--)
        pot = pot*base;
    printf("Digite o valor da potencia: \n");
    printf("%d", pot);

   return 0;
}

