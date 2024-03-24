#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float nota1;
    float nota2;
    float media;
    setlocale(LC_ALL, "portuguese");

    do {
        printf("Digite 1º nota \n");
        scanf("%f", &nota1);
    }while (nota1 < 0 || nota1 > 10);

    do {
         printf("Digite 2º nota \n");
        scanf("%f", &nota2);

    } while (nota2 < 0 || nota2 > 10);
        media = (nota1 + nota2) / 2;

        printf("Nota: %1.f \n", nota1);
        printf("Nota: %1.f \n", nota2);
        printf("média: %1.f \n", media);

    return 0;
}