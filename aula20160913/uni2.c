#include <stdio.h>


union Uniao {
    int i;
    float f;
};

int main()
{
    union Uniao numero;
    char opcao;
    do {
        printf("Voce quer entrar com (i)nt ou (f)loat?\n");
        scanf("%c", &opcao);
    }while(opcao != 'f' && opcao != 'F' && opcao != 'i' && opcao!= 'I');

    if (opcao == 'i' || opcao == 'I')
    {
        printf("Entre com o int:\n");
        scanf("%d", &numero.i);
        printf("Como Float %e\n", numero.f);
    }
    else
    {
        printf("Entre com o float:\n");
        scanf("%f", &numero.f);
        printf("Como int %e\n", numero.i);
    }
    return 0;
}
