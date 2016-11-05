#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int primo (int x);
int main()
{
    int x, v;
    printf("Digite um numero nao negativo:\n");
    scanf("%d", &x);
    v = primo(x);

    return 0;
}

int primo(int x)
{
    int i, var;
    for(i=2;i<x; i++)
    {
        if (x%2==0)
            var = 0;
        else
            var = 1;
    }

    return var;
}
