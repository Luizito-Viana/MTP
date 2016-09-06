#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char frase[256];
    const char frasea[] = "BOM DIA";
    char inv;
    char invest;
    int cont = 0, i;
    int indice = 0;
    printf("Digite uma Frase:\n");
    gets(frase);
    invest = frase[indice];
    inv = frase[indice];
    while(invest)
        {
            frase[indice] = toupper(invest);
            indice++;
            invest = frase[indice];
        }
    printf("%s\n", frase);
    while(inv)
    {
        if(isalpha(inv)!=0)
        {
                cont++;
        }
        i++;
        inv = frase[i];
    }
    printf("%d\n", cont);
    printf("ok\n");
    if(strcmp(frase, frasea)==0)
        printf("Bom dia pra vc tambem");
    else
        printf("Voce quis dizer: %s", frase);

    return 0;
}
