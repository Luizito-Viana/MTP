#include <stdio.h>

int main()
{
    double x, y, soma;
    unsigned char * ponta;
    unsigned char * pontb;
    unsigned char * pontc;
    printf("Digite dois numeros reais:\n");
    scanf("%lf", &x);
    scanf("%lf", &y);
    soma = x + y;
    ponta = (unsigned char *)&x;
    pontb = (unsigned char *)&y;
    pontc = (unsigned char *)&soma;
    printf("%p : %lf\n", &ponta, x);
    printf("%p : %lf\n", &pontb, y);
    printf("%p : %lf\n", &pontc, soma);
    return 0;
}
