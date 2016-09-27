#include <stdio.h>

int main()
{
    int a, n;
    printf("DIGITE QUANTAS BOLAS EXISTEM(TOTAL): \n");
    scanf("%d", &a);
    printf("DIGITE QUANTAS BOLAS IRA RETIRAR: \n");
    scanf("%d", &n);
    if(comb(a, n))
        printf("Combinacao %d,%d: %d\n", a, n, comb(a,n));
    else
        printf("Erro!!");
    return 0;
}

int comb(int a, int n)
{
    if(n < a)
        {
            int comba = 1;
            comba = (n == 0)?  1: (a*comb(a-1,n-1))/n;

            return comba;
        }

    else
        return 0;
}

