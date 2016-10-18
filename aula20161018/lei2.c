#include <stdio.h>
#include <time.h>
void mostrar (int x, char * algo);
int main()
{
    srand(time(0));
    char algo[256];
    int x;
    printf("Quaal arquivo quer abrir?\n");
    scanf("%s", algo);
    printf("Quantos numeros deseja vizualizar?\n");
    scanf("%d", &x);
    mostrar(x, algo);
    return 0;
}

void mostrar (int x, char * algo)
{
    FILE * arquivo;
    int i, j;
    int * y = (int *) malloc(x*sizeof(int));
    arquivo = fopen(algo, "r");
    for (i=0; i<x; i++)
    {
        fscanf(arquivo, "%d\n", &y[i]);
    }
    //fscanf(arquivo, "%d\n%d\n%f\n", nome, &idade, &altura);
    fclose(arquivo);
    for (j=0; j<x; j++)
    {
        fprintf(stdout, "Numero: %d\n", y[j]);
    }
    free(y);
}
