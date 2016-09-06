#include <stdio.h>
#include <time.h>
int main()
{
    srand(time(0));
    int num[10000];
    int i, x, a;
    printf("Digite um numero inteiro nao negativo: \n");
    scanf("%d", &x);
    int soma = 0, media = 0;
    for(i=0; i<10000; i++)
    {
        a=rand()%x+1;
        soma = soma + a;
    }
    media = (soma+x) / 10001;
    printf("Media: %d", media);

    return 0;
}

