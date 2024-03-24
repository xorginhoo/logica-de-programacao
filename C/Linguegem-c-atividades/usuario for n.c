#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float soma, nota, media = 0;
    int i;
    char resposta;

    do
    {
        printf("informe uma nota: ");
        scanf("%f", &nota);
    } while (nota < 0 || nota > 10);
    soma += nota;
    media = soma / i;
    printf("média: %.1f \n", media);

    return 0;
}