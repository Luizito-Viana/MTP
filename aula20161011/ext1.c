#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int n = 0;
float *  entrar_numero(float * dados);
void media(float * dados);
void maior(float * dados);
void menor(float * dados);

int main()
{
    float * dados;
    dados = malloc(1*sizeof(float));
    int x=0;
    do
    {

        system("cls");
        printf("Escolha o que fazer:\n1- Entrar com um numero\n2- Media\n3- Mostrar o Maior\n4- Mostrar o Menor\n5- Sair\n");
        scanf("%d", &x);
        switch (x)
        {
            case 1:
                dados = entrar_numero(dados);
                break;

            case 2:
                media(dados);
                break;

            case 3:
                maior(dados);
                break;

            case 4:
                menor(dados);
                break;

            case 5:
                free(dados);
                break;
        }

    }while(x!=5);
    return 0;
}

float * entrar_numero(float * dados)
{
    printf("Valor do N: %d\n", n);
    printf("Digite o Numero:");
    scanf("%f", &dados[n]);
    n++;
    dados = (float *) realloc(dados,(n+1)*sizeof(float));
    printf("Valor do N: %d\n", n);
    return dados;
}
void media(float * dados)
{
    int i, q=0;
    float med = 0 ;
    for(i=0; i<n; i++)
    {
        med = med + dados[i];
        q++;
    }
    med = med/q;
    printf("MEDIA: %f", med);
    system("Pause");
}
void maior(float * dados)
{
    int i;
    float mai;
    mai = dados[0];
    for (i=0;i<n;i++)
    {
       if (mai < dados[i])
            mai = dados[i];
    }
    printf("MAIOR: %f", mai);
    system("Pause");
}

void menor(float * dados)
{
    int i;
    float men;
    men = dados[0];
    for (i=0;i<n;i++)
    {
       if (men > dados[i])
            men = dados[i];
    }
    printf("MENOR: %f", men);
    system("Pause");
}


