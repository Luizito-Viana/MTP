#include <stdio.h>

struct conta
{
    int quociente;
    int resto;
}veta[1];

int main()
{
    int a, b;
    printf("Digite o numero a ser dividido:\n");
    scanf("%d", &a);
    printf("Digite o numero que ira dividir:\n");
    scanf("%d", &b);
    veta[0].quociente = a/b;
    veta[0].resto = (a%b);
    printf("O quociente: %d\n", veta[0].quociente);
    printf("O resto: %d\n", veta[0].resto);

    return 0;
}
