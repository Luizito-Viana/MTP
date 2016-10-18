#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(0));
    char algo[256];
    int x;
    printf("Informe quantos dados aleatorios deseja gerar: \n");
    printf("(Obs: os numeros gerados sao entre 0 e 100) \n");
    fscanf(stdin, "%d", &x);
    printf("Qual o nome do arquivo?\n");
    scanf("%s", algo);
    colocar(x, algo);
    return 0;
}

void colocar(int x, char * algo)
{
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
