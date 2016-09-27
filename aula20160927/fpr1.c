#include <stdio.h>
int divisao(int dividento, int divisor, int *pquociente, int *presto);
int main()
{
    int dividendo, divisor;
    int quociente, resto;
    printf("Digite o numero a ser dividido:\n");
    scanf("%d", &dividendo);
    printf("Digite o numero que ira dividir:\n");
    scanf("%d", &divisor);
    if (divisao(dividendo, divisor, &quociente, &resto))
    {
        printf("Quociente: %d\n", quociente);
        printf("Resto: %d\n", resto);
    }
    else
        printf("Erro!!");
    return 0;
}

int divisao(int dividento, int divisor, int *pquociente, int *presto)
{
    if (divisor != 0)
    {
        *pquociente = dividento/divisor;
        *presto = dividento%divisor;
        return 1;
    }
    else
        return 0;
}
