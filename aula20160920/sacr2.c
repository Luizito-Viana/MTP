#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int lancardado ();

int main ()
{
    srand(time(0));
    int val = 0, i, soma = 0, tentativa = 0;
    char jog[256];
    printf("Seja bem vindo\n");
    printf("As regras sao simples, jogue o dado 5 vezes, e tente obter mais que 27");
    printf("\nBoa Sorte");
    do
    {
        for(i=0; i<5; i++)
            {
                printf("\nJogue o dado %d (pressionado qualquer letra)\n", i+1);
                gets(jog);
                val = lancardado();
                soma = soma + val;
            }
        tentativa++;
        printf("O valor atingido foi %d", soma);
        if (soma > 27)
            printf("Voce ganhou");
    }while(soma < 27 || tentativa > 3);
    return 0;
}

int lancardado ()
{
    int valor;
    valor = rand()%6+1;
    return valor;
}
