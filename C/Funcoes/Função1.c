#include <stdio.h>

void cabecalho()
{
    printf("**********************\n");
    printf("\tSENAI");
    printf("\n**********************\n");
}
void limpatela()
{
    system("cls||clear");
}

void mostrarIdade(int idade)
{
    printf("Idade: %d\n", idade);
}
int main()
{
    char nome[200];
    int idade;

    cabecalho();

    printf("Digite um nome\n");
    gets(nome);
    printf("Digite sua idade\n");
    scanf("%d", &idade);
    limpatela();
    cabecalho();

    printf("Nome: %s\n", nome);

    mostrarIdade(idade);

    return 0;
}