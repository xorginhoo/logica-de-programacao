#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
      setlocale(LC_ALL, "portuguese");
    float nota, soma, media;
    int i;
    soma = 0;

    for (i = 0; i < 3; i++)
    {
        do
        {
            printf("informe uma nota: ");
            scanf("%f", &nota);
        } while (nota < 0 || nota > 10);
        soma += nota;
    }
    media = soma / i;
    printf("média: %.1f \n", media);

    if (media >= 7)
    {
        printf("Aprovado \n");
    }
    else if (media >= 5)
    {
        printf("recuperação\n");
    }
    else 
    {
        printf("reprovado\n");
    }

    return 0;
}