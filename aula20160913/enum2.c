#include <stdio.h>

typedef enum
{
    Janeiro,
    Fevereiro,
    Marco,
    Abril,
    Maio,
    Junho,
    Julho,
    Agosto,
    Setembro,
    Outubro,
    Novembro,
    Dezembro,
}MES;

int main()
{
    enum A = {};
    int x;
    printf("Qual mes vc nasceu?(numero)");
    scanf("%d", &x);
    switch (x)
        {
            case 1:
                printf("Voce nasceu em: %s", mes[1]);
                break;

            case 2:
                printf("Voce nasceu em: %s", mes[2]);
                break;

            case 3:
               printf("Voce nasceu em: %s", mes[3]);
                break;

            case 4:
                printf("Voce nasceu em: %s", mes[4]);
                break;

            case 5:
                printf("Voce nasceu em: %s", mes[5]);
                break;

            case 6:
                printf("Voce nasceu em: %s", mes[6]);
                break;

            case 7:
                printf("Voce nasceu em: %s", mes[7]);
                break;

            case 8:
                printf("Voce nasceu em: %s", mes[8]);
                break;

            case 9:
                printf("Voce nasceu em: %s", mes[9]);
                break;

            case 10:
                printf("Voce nasceu em: %s", mes[10]);
                break;

            case 11:
                printf("Voce nasceu em: %s", mes[11]);
                break;

            case 12:
                printf("Voce nasceu em: %s", mes[12]);
                break;
        }

    return 0;
}
