#include <stdio.h>
#include <ctype.h>

int main()
{
    char frase[100];
    char invest;
    int indice = 0;
    printf("Digite uma Frase: ");
    printf("\n");
    fflush(stdin);
    gets(frase);
    invest = frase[indice];
    while(invest)
        {
            frase[indice] = tolower(invest);
            indice++;
            invest = frase[indice];
        }
    printf("%s", frase);

    return 0;
}
