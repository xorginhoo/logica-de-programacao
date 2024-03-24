#include <stdio.h>
struct dados_aluno
{
    char nome[200];
    char ndaturma[200];
    char matricula[200];
    char notas[300];
};

struct dados_professor
{
    char nome[200];
    char Disciplina[200];
    char turmas[300];
};

int main()
{
    int i;
    struct dados_aluno funcionario[3];
    struct dados_professor cliente[3];
    for (i = 0; i < 3; i++)
    {
        printf("       funcionario        \n");
        printf("Digite seu nome: \n");
        gets(funcionario[i].nome);
        printf("Digite sua data de adimssao: \n");
        gets(funcionario[i].ndaturma);
        printf("Digite seu matricula: \n");
        gets(funcionario[i].matricula);
        printf("Digite seu endereço:\n");
        gets(funcionario[i].notas);

        printf("cliente\n");
        printf("Digite seu nome:\n");
        gets(cliente[i].nome);
        printf("Digite sua data de Disciplina:\n");
        gets(cliente[i].Disciplina);
        printf("Digite seu endereço:\n");
        gets(cliente[i].turmas);

        fflush(stdin);
        system("cls||clear");
    }

    for (i = 0; i < 3; i++)
    {
        printf("Nome funcionario: %s \n", funcionario[i].nome);
        printf("Admissao: %s \n", funcionario[i].ndaturma);
        printf("matricula: %s \n", funcionario[i].matricula);
        printf("endereço: %s \n", funcionario[i].notas);

        printf("Nome cliente: %s \n", cliente[i].nome);
        printf("Data de Disciplina: %s \n", cliente[i].Disciplina);
        printf("Endereço: %s \n", cliente[i].turmas);
    }

    return 0;
}