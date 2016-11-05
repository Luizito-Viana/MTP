#include<stdio.h>
#include<stdlib.h>
#include<time.h>

char pegacarta();

int main ()
{
    srand(time(0));
    int x, soma = 0, i;
    char carta1, carta2;
    char carta[100];
    carta1 = pegacarta();
    carta2 = pegacarta();
    printf("Quantas cartas voce quer? ");
    scanf("%d", &x);
    for(i=0; i< x; i++)
        {
            carta[i] = pegacarta();

            if(carta[i] == 'A')
                soma = soma + 1;
            if(carta[i] == '2')
                soma = soma + 2;
            if(carta[i] == '3')
                soma = soma + 3;
            if(carta[i] == '4')
                soma = soma + 4;
            if(carta[i] == '5')
                soma = soma + 5;
            if(carta[i] == '6')
                soma = soma + 6;
            if(carta[i] == '7')
                soma = soma + 7;
            if(carta[i] == '8')
                soma = soma + 8;
            if(carta[i] == '9')
                soma = soma + 9;
            if(carta[i] == 'D')
                soma = soma + 10;
            if(carta[i] == 'J')
                soma = soma + 10;
            if(carta[i] == 'Q')
                soma = soma + 10;
            if(carta[i] == 'K')
                soma = soma + 10;
        }

    if (soma > 21)
    {
        printf("Voce perdeu\n");
        printf("Sua soma:%d ", soma);
    }
    if (soma == 21)
    {
        printf("Voce ganhou\n");
        printf("Sua soma:%d ", soma);
    }
    if(soma<21)
    {
        printf("Confira nas Cartas:\n");
        printf("Minhas Cartas: %c, %c\n", carta1, carta2);
        printf("Sua soma:%d \n", soma);
    }


    return 0;
}

char pegacarta()
{
    char carta;
    switch(rand()%13+1)
    {
        case 1:
            carta = 'A';
            break;
        case 2:
            carta = '2';
            break;
        case 3:
            carta = '3';
            break;
        case 4:
            carta = '4';
            break;
        case 5:
            carta = '5';
            break;
        case 6:
            carta = '6';
            break;
        case 7:
            carta = '7';
            break;
        case 8:
            carta = '8';
            break;
        case 9:
            carta = '9';
            break;
        case 10:
            carta = 'D';
            break;
        case 11:
            carta = 'J';
            break;
        case 12:
            carta = 'Q';
            break;
        case 13:
            carta = 'K';
            break;
    }
    return carta;
}
