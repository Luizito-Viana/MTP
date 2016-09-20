#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
    int oi = 0;
    srand(time(0));
    do
    {
        int op;
        printf("Digite um numero: \n");
        scanf("%d", &op);
        parabens(op);
    }while(oi < 10);
    return 0;
}

void parabens (int op)
{
    if(rand()%10 + 1 == op)
        printf("Parabens");
}
