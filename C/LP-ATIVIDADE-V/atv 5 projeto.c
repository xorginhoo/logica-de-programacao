#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Dados do usuario
struct usuario
{
    char nome[200];
    char email[200];
    char senha[200];
};
struct escolha_livro
{
    int escolha[2], i;
};

struct escolha_livro escolher;
void emprestimo()
{
    printf("----Fazemos o emprestimo de livros---\n");
    printf("Disponibilizamos 5 dias para a leitura.");
}
void Livros(char *opgeneros)
{
    printf("\n \n Livros Disponiveis: ");
    if (opgeneros == 1)
    {
        printf("\n\n1 - Turma da mônica");
    }
    else
    {
        printf("\n\n2 - Diario de um banana");
    }
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    struct usuario registro;
    int escolhaem=0;

    int opcao;
    char opgeneros[2][250] = {"Infantil", "Infanto-juvenil"};
    char oplivros[2][250] = {"Turma da mônica", "Diario de um banana"};

    
        printf("1 - Usuario\n");
        printf("2 - Gênero do livro\n");
        printf("3 - Empréstimo\n");
        printf("4 - Multa\n");
        printf("Escolha uma alternativa:\n");
        scanf("%d", &opcao);
        printf("\n");
        
        
            switch (opcao)
            {
            case 1:
                printf("Digite o nome do usuario:\n ");
                scanf("%s", &registro.nome);
                fflush(stdin);
                printf("Digite o email:\n");
                scanf("%s", &registro.email);
                printf("Digite a senha:\n ");
                scanf("%s", &registro.senha);
                printf("\n");
                fflush(stdin);
                break;

            case 2:
                printf("\nGêneros: \n");
                printf("\n1 - Infatil");
                printf("\n2 - Infanto-juvenil ");
                printf("\nescolha o gênero:\n");
                scanf("%s", &opgeneros);
                printf("\n");
                Livros(*opgeneros);
                break;

            case 3:
                emprestimo();
                printf("\nDeseja um empréstimo:\n");
                printf("\n1- sim:\n");
                printf("\n2- não:\n");
                scanf("%d", &escolhaem);

                if (escolhaem == 1)
                {
                    printf("Concedido");
                }else{
                    printf("recusado");
                }
                break;

            case 4:

                printf("                        ------- Info sobre Multas ------                    \n");
                printf("Caso haja excessão do prazo será cobrado uma multa de R$2,50 por dia corrido\n");
                printf("\n          -------para mais informações procure o gerente---------   \n");
                break;

            default:
                printf("tente novamente.\n\n");
                break;
            }
       
        return 0;
    }
