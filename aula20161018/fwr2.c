#include<stdio.h>
#include<time.h>>
void novo();
void mostrar();
void acrescentar();

int main()
{
    srand(time(0));
    int x=0;
    do
    {
        system("cls");
        printf("Escolha uma Alternativa:\n");
        printf("1- Novo Arquivo:\n");
        printf("2- Acrescentar um arquivo:\n");
        printf("3- Ler um arquivo:\n");
        printf("4- Sair\n");
        scanf("%d", &x);
        switch(x)
        {
        case 1:
            novo();
            break;
        case 2:
            acrescentar();
            break;
        case 3:
            mostrar();
            break;
        case 4:
            break;
        }
    }while(x!=4);
    return 0;
}

void novo()
{
    char algo[256];
    int x;
    printf("Informe quantos dados aleatorios deseja gerar: \n");
    printf("(Obs: os numeros gerados sao entre 0 e 100) \n");
    fscanf(stdin, "%d", &x);
    printf("Qual o nome do arquivo?\n");
    scanf("%s", algo);
    int i;
    int y = 0;
    FILE * arquivo;
    arquivo = fopen(algo, "w");
    for (i=0; i<x; i++)
    {
        y = rand()%99+1;
        fprintf(arquivo, "%d\n", y);
    }
    fclose(arquivo);
}

void mostrar()
{
    char algo[256];
    int x;
    printf("Informe quantos dados aleatorios deseja gerar: \n");
    printf("(Obs: os numeros gerados sao entre 0 e 100) \n");
    fscanf(stdin, "%d", &x);
    printf("Qual o nome do arquivo?\n");
    scanf("%s", algo);
    FILE * arquivo;
    int i, j;
    int * y = (int *) malloc(x*sizeof(int));
    arquivo = fopen(algo, "r");
    for (i=0; i<x; i++)
    {
        fscanf(arquivo, "%d\n", &y[i]);
    }
    fclose(arquivo);
    for (j=0; j<x; j++)
    {
        fprintf(stdout, "Numero: %d\n", y[j]);
    }
    free(y);
    system("pause");
}

void acrescentar()
{
    FILE * arquivo;
    char algo[256];
    int x, i;
    int y;
    printf("Qual o nome do arquivo?\n");
    scanf("%s", algo);
    printf("Quantos arquivos deseja inserir?");
    scanf("%d", &x);
    arquivo = fopen(algo, "a");
    for (i=0; i<x; i++)
    {
        y = rand()%99+1;
        fprintf(arquivo, "%d\n", y);
    }
    fclose(arquivo);

}
