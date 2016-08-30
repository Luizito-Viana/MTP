#include <stdio.h>
#include<math.h>

int main()
{
    float inv, inv2 = 0;
    double invert, invert2 = 0;
    int i, num, j;
    printf("Digita o numero ai: \n");
    scanf("%d", &num);
    invert = 1.0/num;
    for (i = 0; i<729; i++)
        invert2 = invert2 + invert;
    inv = 1.f/num;
    for(j=0; j<729; j++)
        inv2 = inv2 + inv;
    printf("%.15f \n", invert2);
    printf("%.15f \n", inv2);
    return 0;
}
