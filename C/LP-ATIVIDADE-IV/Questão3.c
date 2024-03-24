#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produto {
    char nome[200];
    float preco;
    int estoque;
};

float calcularValorTotal(struct Produto produto) {

    return produto.preco * produto.estoque;
}

//função de comprar e atualizar o estoque
void realizarCompra(struct Produto *produto, int quantidadeComprada) {
    if (quantidadeComprada > 0) {
        produto->estoque += quantidadeComprada;
        printf("%d unidades de %s foram adicionadas ao estoque.\n", quantidadeComprada, produto->nome);
    } else {
        printf("Quantidade invalida, 0 compras feitas.\n");
    }
}

// Função do valor total no estoque
void consultarEstoque(struct Produto produto) {
    printf("Info do Produto:\n");
    printf("Nome: %s\n", produto.nome);
    printf("Valor: R$%.2f\n", produto.preco);
    printf("Quantidade em Estoque: %d\n", produto.estoque);
    printf("Valor total em Estoque: R$%.2f\n", calcularValorTotal(produto));
}



int main() {
    struct Produto produto; 

    int opcao;
    int quantidadeComprada;


    do {
        printf("1 - Adicionar produto\n");
        printf("2 - Realizar uma compra\n");
        printf("3 - Consultar estoque\n");
        printf("4 - Sair do programa\n");
        printf("Escolha uma alternativa:\n");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao) {
            case 1:
                printf("Digite o nome do produto: ");
                scanf("%s", produto.nome);
                printf("Digite o valor do produto: R$");
                scanf("%f", &produto.preco);
                printf("Digite a quantidade em estoque:\n ");
                scanf("%d", &produto.estoque);
                printf("\n");
                
                break;

            case 2:
                printf("Digite a quantidade a ser comprada: ");
                scanf("%d", &quantidadeComprada);
                realizarCompra(&produto, quantidadeComprada);
                printf("\n");
                break;

            case 3:
                consultarEstoque(produto);
                printf("\n");
                break;

            case 4:
                printf("saindo do programa.\n");
                break;

            default:
                printf("tente novamente.\n\n");
                break;
        }
    } while (opcao != 4);

    return 0;
}
