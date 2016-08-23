#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(0));
    int x, y, soma;
    printf("Digite um Numero: ");
    scanf("%d",&x);
    y=rand()%2;
    soma = x + y;
    if(soma%2==0)
        printf("Sim, o numero e par");
    else
        printf("Nao, o numero e impar");

    return 0;
}
