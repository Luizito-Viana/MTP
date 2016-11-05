#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char * texto = malloc(sizeof(char));
    texto[0] = '\0';
    printf("Entre com o texto:\n");
    recebetexto(texto);
    return 0;
}
void recebetexto(char * texto){
    int c, tamanho = strlen(texto);
    do{
        c = getchar();
        if(c !='#'){
            texto[tamanho] = c;
            tamanho++;
            texto = realloc(texto,(tamanho+1)*sizeof(char));
             texto[tamanho] = '\0';
        }

    }while(c !='#');
}

=========================================================================================
#include <stdio.h>
//#define N 30
//struct dados
//{
   //char nome[256];
   //int idade;
   //float altura;
//}vet[N] ;

int main ()
{
    int x = 0;
    do
    {
        system("cls");
        printf("Escolha uma Alternativa:\n1- Cadastrar\n2- Mostrar\n3- Sair\n");
        scanf("%d", &x);
        switch(x)
        {
        case 1:
            cadastrar();
            break;
        case 2:
            mostrar();
            break;
        case 3:
            break;
        }
    }while(x!=3);
    return 0;
}
