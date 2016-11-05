#include <stdio.h>
#include <math.h>
float media(float x1, float x2, float x3, float x4, float x5);
float desvio (float x1, float x2, float x3, float x4, float x5, float med);

int main()
{
    float x1, x2, x3, x4, x5;
    float med, dp;
    printf("Digite 5 numeros para os calculos:\n");
    scanf("%f", &x1);
    scanf("%f", &x2);
    scanf("%f", &x3);
    scanf("%f", &x4);
    scanf("%f", &x5);
    med = media(x1,x2,x3,x4,x5);
    printf("A media e: %f", med);
    dp = desvio(x1,x2,x3,x4,x5,med);
    printf("O desvio padrao e: %f", dp);
    return 0;
}

float media(float x1, float x2, float x3, float x4, float x5)
{
    float m;
    m = (x1+x2+x3+x4+x5)/5;
    return m;
}

float desvio (float x1, float x2, float x3, float x4, float x5, float med)
{
    float d, a1, a2, a3, a4, a5;
    a1 = x1-med;
    a2 = x2-med;
    a3 = x3-med;
    a4 = x4-med;
    a5 = x5-med;
    d = sqrt(((pow(a1,2)+pow(a2,2)+pow(a3,2)+pow(a4,2)+pow(a5,2))/4));
    return d;
}

