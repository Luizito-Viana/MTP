#include <stdio.h>

int main()
{
	float a,b,c, media; //Nota A, Nota B, Nota C
	printf("Digite o valor da Nota A:\n");
	scanf("%f",&a);
	printf("Digite o valor da Nota B:\n");
	scanf("%f",&b);
	printf("Digite o valor da Nota C:\n");
	scanf("%f",&c);
	media = ((a*2)+(b*3)+(c*5))/10;
	printf("O valor da Media e:\n");
	printf("%f",media);

	return 0;
}
