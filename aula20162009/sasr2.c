#include<stdio.h>

void par()
{
    system("cls");
    printf("Numeros Pares:\n");
    printf("2 4 6 8 10");
}

void impar()
{
    system("cls");
    printf("Numeros Impares:\n");
    printf("1 3 5 7 9");
}
int main()
{
    int esc;
    printf("Digite:\n1-Pares\n2-Impares\n");
    scanf("%d", &esc);
    if (esc==1)
        par();
    if (esc==2)
        impar();
    if(esc!=1 && esc!=2)
        printf("Numero Imvalido");
    return 0;
}
