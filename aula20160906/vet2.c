#include <stdio.h>

int main()
{
    int vet[10], vetb[10], i, j, a=9, k;
    printf("Digite 10 numeros (nao negativos):\n");
    for (i=0; i<10; i++)
    {
        scanf("%d", &vet[i]);
    }
    for (j=0; j<10; j++)
    {
        vetb[j] = vet[a];
        a--;
    }
    for(k=0; k<10; k++)
    {
        printf("%d\n", vetb[k]);
    }
}
