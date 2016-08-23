#include <stdio.h>
#include <time.h>

int main()
{
    int x, fatorial, i;
    printf("Digite o valor do x:(entre 0 e 12) \n");
	scanf("%d",&x);
	fatorial = x;
	if (x==0)
	{
        fatorial = 1;
        printf("%d",fatorial);
	}
    else
    {
        for (i = x-1; i != 1; i--)
            fatorial = fatorial * i;
        printf("%d",fatorial);
    }
   return 0;
}
