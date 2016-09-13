#include <stdio.h>
#define N 100
int n = 0;

struct cadastro
{
    char nome[100];
    int idade;
    int telefone;
}vetc[N];

int cadastrar ()
{
    system("cls");
    printf("Digite algumas informaçoes:\n");
    printf("Nome: ");
    fflush(stdin);
    gets(vetc[n].nome);
    printf("Idade: ");
    scanf("%d", &vetc[n].idade);
    printf("Telefone: ");
    scanf("%d", &vetc[n].telefone);
    n++;

    return 0;
}

void listar_nomes ()
{
    system("cls");
    int i;

    for(i=0; i<n; i++)
    {
        printf("Aluno %d:  ", i+1);
        printf("%s\n", vetc[i].nome);
    }
    system("pause");
    return 0;
}

void listar_idade ()
{
    system("cls");
    int i;
    for(i=0; i<n; i++)
    {
        printf("Aluno %d: " , i+1);
        printf("%d\n", vetc[i].idade);
    }
    system("pause");
    return 0;

}

void listar_telefone ()
{
    system("cls");
    int i;
    for(i=0; i<n; i++)
    {
        printf("Aluno %d: " , i+1);
        printf("%d\n", vetc[i].telefone);
    }
    system("pause");
    return 0;

}
int main()
{

    int x=0;
    do
    {

        system("cls");
        printf("Escolha o que fazer:\n1- Cadastro\n2- Lista de Nomes\n3-Lista de Idades\n4-Lista de Telefones\n5- Sair\n");
        scanf("%d", &x);
        switch (x)
        {
            case 1:
                cadastrar();
                break;

            case 2:
                listar_nomes();
                break;

            case 3:
                listar_idade();
                break;

            case 4:
                listar_telefone();
                break;

            case 5:
                break;
        }

    }while(x!=5);


    return 0;
}
