#include <stdio.h>
#include <string.h>

int main()
{
    char frase[256];
    char mensagem [256];
    int i, j = 0;
    printf("Digite uma Frase: \n");
    fgets(frase, 256, stdin);
    mensagem[j] = frase[0];
    j++;
    for(i=0; frase[i] != '\0'; i++)
    {
        if(frase[i] == ' ')
        {
            mensagem[j] = frase[i+1];
            j++;
        }
    }
    printf("Mensagem: %s", mensagem);
    return 0;
}
