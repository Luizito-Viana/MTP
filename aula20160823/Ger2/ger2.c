#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(0)); // declarar nas primeiras linhas de main()
    int x, y, cont = 0;
    x = rand()%99+1;
    do
    {
        printf("Digite um Numero: \n");
        scanf("%d", &y);
        if (y < x)
        {
            printf("BAIXO\n");
            cont++;
        }
        if (y > x)
        {
            printf("ALTO\n");
            cont++;
        }

    }while (x != y);
    cont++;
    printf("Parabens, voce acertou com %d tentativas", cont);
    return 0;
}
