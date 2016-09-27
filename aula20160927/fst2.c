#include <stdio.h>

struct fracao
{
    int num;
    int den;
}veta[3];

void soma(int a, int b, int c, int d);

int main()
{
    int a, b, c, d;
    printf("Digite o numerador do numero 1:\n");
    scanf("%d", &a);
    printf("Digite o denominador do numero 1:\n");
    scanf("%d", &b);
    printf("Digite o numerador do numero 2:\n");
    scanf("%d", &c);
    printf("Digite o denominador do numero 2:\n");
    scanf("%d", &d);
    veta[0].num = a;
    veta[0].den = b;
    veta[1].num = c;
    veta[1].den = d;
    soma(a,b,c,d);
    printf("A soma e: %d/%d\n", veta[2].num, veta[2].den);

    return 0;
}

void soma(int a, int b, int c, int d)
{
    int x = 0, y;
    if (b == d)
    {
        veta[2].num = a + c;
        veta[2].den = d;
    }

    else
    {
       y = veta[2].den = b*d;
       veta[2].num = ((d*a)) + ((b*c));
    }
}
