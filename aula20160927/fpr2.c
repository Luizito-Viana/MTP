#include <stdio.h>
#include <ctype.h>
#include <string.h>

void soletras(char *str1, int n, char *str2);

int main()
{
    char str1[256];
    char str2[256];
    printf("Digite a frase desejada:\n");
    fflush(stdin);
    gets(str1);
    soletras(str1, strlen(str1), str2);
    printf("A nova frase e: %s\n", str2);

    return 0;
}

void soletras(char *str1, int n, char *str2)
{
    int i;
    int j = 0;
    for (i=0; i < n; i++)
    {
        if(isalpha(str1[i]))
        {
            str2[j] = str1[i];
            j++;
        }
    }
    str2[j] = '\0';
}
