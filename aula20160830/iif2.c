#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <inttypes.h>

int main()
{
    int64_t i;
    float x;
    long long int fatorial;
    printf("Digite o valor do x: \n");
	scanf("%f",&x);
	fatorial = x;
	if (x==0)
	{
        fatorial = 1;
        printf("%f",fatorial);
	}
    else
    {
        for (i = x-1; i != 1; i--)
            fatorial = fatorial * i;
        printf("%"PRId64,fatorial);
    }
   return 0;
}
