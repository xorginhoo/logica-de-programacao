#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n;
    char nome[500][200];
    char numero[500][200];
    int i;
    int salvo = 0;

    do
    {
        printf("========= AGENDA =========\n");
        printf("1 - Salvar novo numero. \n");
        printf("2 - Exibir os numeros salvos. \n");
        printf("\nDigite a opção ");
        scanf("%d", &n);
        printf("\n");

        fflush(stdin);

        switch (n)
        {

        case 1:

            printf("Digite o nome do contato: ");
            gets(nome[salvo]);

            printf("Digite o número: ");
            gets(numero[salvo]);

            salvo++;
            break;

        case 2:

            for (i = 0; i < salvo; i++)
            {

                printf("Nome do contato: %s \n", nome[i]);
                printf("Número: %s \n", numero[i]);
                printf("\n");
            }

            break;

        default:
            printf("Opção invalida. \n");
            break;
        }

    } while (n != 2);

    return 0;
}