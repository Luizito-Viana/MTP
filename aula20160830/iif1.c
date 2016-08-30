#include <stdio.h>
#include <float.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(0));
    int i;
    for(i = 0; i<10; i++)
        printf("%f\n", (float)rand()/RAND_MAX);





    if(1.0f > (1.0f - FLT_EPSILON))
        printf("1 e maior que 1-eps");
    else
         printf("1 nao e maior que 1-eps");
    return 0;
}
