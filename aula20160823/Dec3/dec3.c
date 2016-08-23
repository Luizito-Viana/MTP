#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(0));
    int x, y, z, soma;
    x=rand()%6+1;
    y=rand()%6+1;
    z=rand()%6+1;
    soma = x + y +z;
    printf("A soma deu: ");
    printf("%d", soma);
    printf("\n\n");
    if(soma==7 || soma==11)
        printf("Sim, voce ganhou");
    else
        printf("Nao, voce perdeu");

    return 0;
}
