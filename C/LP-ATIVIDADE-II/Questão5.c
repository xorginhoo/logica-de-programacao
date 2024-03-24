#include <stdio.h>
#include <locale.h>

int main()
{
    int idioma, idioma1, idioma2, idioma3, op;
    setlocale(LC_ALL, "portuguese");

    printf("1 INGLÊS\n");
    printf("2 ESPANHOL\n");
    printf("3 FRANCÊS\n");
    printf("\n");

    printf("Escolha um idioma:");
    scanf("%d", &idioma);
    system("cls|| clear");

    printf("1 INGLÊS\n");
    printf("2 ESPANHOL\n");
    printf("2 FRANCÊS\n");
    printf("\n");

    system("cls|| clear");

    switch (idioma)
    {

    case 1:
        printf("Idioma escolhido é o Inglês:\n");
        printf("welcome!");
        scanf("%d", &idioma1);
        break;
    case 2:
        printf("Idioma escolhido é o Espanhol:\n");
        printf("sea bienvenido!");
        scanf("%d", &idioma2);

        break;
    case 3:
        printf("Idioma escolhido é o Francês:\n");
        printf("Accueillir!");
        scanf("%d", &idioma3);
        break;

    default:
        printf("Opção digitada errada");
        break;
    }

    return 0;
}