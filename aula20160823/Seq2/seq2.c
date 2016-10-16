#include <stdio.h>

int main ()
{
    float b, h;
    float area = 0;
    printf("Digite o valor da base: \n");
    scanf("%f", &b);
    printf("Digite o valor da Altura: \n");
    scanf("%f", &h);
    area = (b*h)/2;
    printf("Area: %f", area);
    return 0;
}
