#include <stdio.h>

int main()
{
    int veta[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int n = sizeof(veta)/sizeof(int);
    printf("A soma dos elementos: %d", soma(n,veta));
    return 0;
}

int soma (int n, int *veta)
{
    int soma = 0;
    int i;
    for (i = 0; i<n; i++)
        soma = soma + veta[i];

    return soma;
}
