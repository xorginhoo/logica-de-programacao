#include <stdio.h>
#include <locale.h>

int main()
{
    int idioma, idioma1, idioma2, idioma3, op;
    setlocale(LC_ALL, "portuguese");

    printf("1 INGL�S\n");
    printf("2 ESPANHOL\n");
    printf("3 FRANC�S\n");
    printf("\n");

    printf("Escolha um idioma:");
    scanf("%d", &idioma);
    system("cls|| clear");

    printf("1 INGL�S\n");
    printf("2 ESPANHOL\n");
    printf("2 FRANC�S\n");
    printf("\n");

    system("cls|| clear");

    switch (idioma)
    {

    case 1:
        printf("Idioma escolhido � o Ingl�s:\n");
        printf("welcome!");
        scanf("%d", &idioma1);
        break;
    case 2:
        printf("Idioma escolhido � o Espanhol:\n");
        printf("sea bienvenido!");
        scanf("%d", &idioma2);

        break;
    case 3:
        printf("Idioma escolhido � o Franc�s:\n");
        printf("Accueillir!");
        scanf("%d", &idioma3);
        break;

    default:
        printf("Op��o digitada errada");
        break;
    }

    return 0;
}