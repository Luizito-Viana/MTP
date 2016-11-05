#include<stdio.h>
#include<math.h>

float delta (float a, float b, float c);
float raiz1(float a, float b, float c, float delt);
float raiz2(float a, float b, float c, float delt);
int main()
{
    float a, b, c, delt, r1, r2;
    printf("Digite os coeficientes da funçao:");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    delt = delta(a,b,c);
    if(delt >= 0)
    {
        r1 = raiz1(a, b, c, delt);
        r2 = raiz2(a, b, c, delt);
        printf("As raizes sao: %.3f, %.3f", r1, r2);
    }
    if(delt < 0)
    {
        r1 = raiz1(a, b, c, delt);
        r2 = raiz2(a, b, c, delt);
        printf("As raizes sao: %.3f *I, %.3f *I", r1, r2);
    }
    return 0;
}

float delta (float a, float b, float c)
{
    float delta;
    delta = ((b*b)-(4*a*c));
    return delta;
}

float raiz1(float a, float b, float c, float delt)
{
    float x1;
    x1 = (-b + (sqrt(delt)))/(2*a);
    return x1;
}
float raiz2(float a, float b, float c, float delt)
{
    float x2;
    x2 = (-b - (sqrt(delt)))/(2*a);
    return x2;
}
