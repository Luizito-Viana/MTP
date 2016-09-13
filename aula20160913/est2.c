#include <stdio.h>
#include <math.h>
#define SOMA(x,y) (x+y)
#define DIST(x,y,z) sqrt((pow(x,2))+(pow(y,2))+(pow(z,2)))
struct pgeometrico
{
    float x;
    float y;
    float z;
}vetp[3];

int main ()
{
    float a, b, c, k;
    printf("Digite o ponto A:\n");
    scanf("%f", &vetp[0].x);
    scanf("%f", &vetp[0].y);
    scanf("%f", &vetp[0].z);
    printf("Digite o ponto B:\n");
    scanf("%f", &vetp[1].x);
    scanf("%f", &vetp[1].y);
    scanf("%f", &vetp[1].z);
    a = SOMA(vetp[0].x,vetp[1].x);
    b = SOMA(vetp[0].y,vetp[1].y);
    c = SOMA(vetp[0].z,vetp[1].z);
    vetp[2].x = (vetp[1].x - vetp[0].x);
    vetp[2].y = (vetp[1].y - vetp[0].y);
    vetp[2].z = (vetp[1].z - vetp[0].z);
    k = DIST(vetp[2].x,vetp[2].y,vetp[2].z);
    printf("A soma (X) e: %f\n", a);
    printf("A soma (Y) e: %f\n", b);
    printf("A soma (Z) e: %f\n", c);
    printf("A distancia e: %f\n", k);

    return 0;
}

