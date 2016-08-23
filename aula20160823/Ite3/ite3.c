#include <stdio.h>

int main()
{
    char str[100];
    int i, cont = 0;
    printf("Digite uma frase: \n");
    fflush;
    scanf("%s",&str);
    for (i=0; i<100; i++)
    {
        if(str[i]!='\0')
            cont++;
        if(str[i]== ' ')
            i=i+1;
        if(str[i]=='\0')
            break;
    }
    printf("%d", cont);
    return 0;
}
