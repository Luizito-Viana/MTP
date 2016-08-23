#include <stdio.h>

int main()
{
    int i, num;
    printf("Me de um numero: \n");
	scanf("%d",&num);
	for (i = 2; i<num; i++)
    {
        if(num%i==0)
        {
            printf("Nao e primo: \n");
            break;
        }
    }
    printf("%d",i);
    printf("\n\n");
    printf("E primo");

    return 0;
}
