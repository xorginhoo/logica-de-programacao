#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    
    int opcao;

    

    printf("---- M E N U ------\n");
    printf(" 1 - Novo jogo\n");
    printf(" 2 - Carregar jogo\n");
    printf(" 3 - Configurações\n");
    printf("\n");
    printf("Digite a opção desejada: \n");
    scanf("%d", &opcao);
    printf("\n");

    system("cls || clear");

    switch (opcao)
    {
    case 1:
        printf("OPÇÃO 1 ESCOLHIDA:\n");
        printf("NOVO JOGO :)\n");
        break;
    case 2:
        printf("OPÇÃO 2 ESCOLHIDA:\n");
        printf("CARREGANDO JOGO!\n");
        break;
    case 3:
        printf("OPÇÃO 3 ESCOLHIDA:\n");
        printf("CONFIGURAÇÕES DE JOGO!\n");
        break;
    default:
        printf("OPÇÃO INVÁLIDA!");
        break;
    }
    return 0;
}