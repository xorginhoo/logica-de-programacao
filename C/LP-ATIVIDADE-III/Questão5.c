#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int opcao;
    int i;
    int j = 0;
    char produto[999][200];
    int quantidade[200];
    float valorProduto[200];

    do
    {
        printf("========= LOJA ========= \n");
        printf("1  -  Adicionar venda\n");
        printf("2  -  Exibir total de vendas\n");
        printf("Escolha a opção desejada: ");
        scanf("%d", &opcao);

        fflush(stdin);

        system("cls || clear");

        switch (opcao)
        {
        case 1:

            printf("Digite  o nome do produto: ");
            gets(produto[j]);

            fflush(stdin);     

            printf("Digite o valor do produto: ");
            scanf("%f", &valorProduto[j]);

            printf("Digite a quantidade do produto: ");
            scanf("%d", &quantidade[j]);

            j++;

            system("cls || clear");

            break;
        case 2:

            for (i = 0; i < j; i++)
            {

                printf("%dº vendas\n", i + 1);
                printf("Produtos: %s\n", produto[i]);
                printf("Valor dos produtos: %.2f\n", valorProduto[i]);
                printf("Quantidade: %d\n", quantidade[i]);
                printf("\n");
            }
            break;

        default:
            printf("Opção invalida!\n");
            break;
        }
    } while (opcao != 2);

    return 0;
}