#include<stdio.h>
#include<math.h>

void q(int x, float p, char c);
void pgetchar();
int main()
{
    int x;
    float f;
    char c;
    printf("Digite o inteiro:\n");
    scanf("%d", &x);
    printf("Digite o float:\n");
    scanf("%f", &f);
    printf("Digite um caracter:\n");
    pgetchar();
    c = getchar();
    q(x,f,c);
    return 0;
}

void pgetchar()
{
  // Getchar "protegido", recebe apenas um
  // caractere e descarta o resto do STDIN
  int c;

  while((c = getchar()) != EOF && c != '\n');
}
void q(int x, float f, char c)
{
    printf("O inteiro ao Quadrado:%d\n", x*x);
    printf("A raiz do Float:%f\n", sqrt(f));
    if(c > 65 && c < 90)
        printf("De minuscula para maiuscula: %c", c+32);

    if(c > 97 && c < 122)
         printf("De maiuscula para minuscula: %c", c-32);
}
