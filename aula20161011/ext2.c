#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 50
struct produto
{
    char nome[50];
    int codigo;
    int preco;
}veta[N];
struct vendas
{
    char produto[256];
    int quant;
}vetb[N];

int main()
{
    int x=0;
    do
    {
        system("cls");
        printf("Escolha o que fazer:\n1- Ver Todos\n2- Incluir\n3- Excluir\n 4- Sair\n");
        scanf("%d", &x);
        switch (x)
        {
            case 1:
                vertodos();
                break;

            case 2:
                incluir(dados);
                break;

            case 3:
                excluir(dados);
                break;

            case 4:
                break;
        }

    }while(x!=4);
    return 0;
}

void vertodos()
{

}

//void recebe(char tipo, void * endereco) {
    //int c;
   // switch(tipo){
      //  case 'i': scanf("%d",(int*) endereco); break;
       // case 'f': scanf("%f",(float*) endereco); break;
       // case 'd': scanf("%lf",(double*) endereco); break;
       // case 'c': scanf("%c",(char*) endereco); break;
 //   }
   //while((c = getchar()) != EOF && c != '\n'); // apagar o buffer de entrada
//}

//void recebeSTR(char * endereco, int n) {
  //  fgets(endereco, n, stdin);
   // if(endereco[strlen(endereco)-1] == 10)
   //    endereco[strlen(endereco)-1] = '\0';
//}
