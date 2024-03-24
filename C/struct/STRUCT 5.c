#include <stdio.h>


struct dados_aluno
{
    char nome[200];
    char ndaturma[200];
    char idade[20];
    float notas;
    float media;
    char situacao;
};

struct dados_professor
{
    char nome[200];
    char Disciplina[200];
    char turmas[300];
};

int main()
{
    int i, j;
    struct dados_aluno aluno[3];
    struct dados_professor prof[2];

    // repetição dos professores
    for (j = 0; j < 3; j++)
    {
        printf("prof\n");
        printf("Digite seu nome:\n");
        gets(prof[j].nome);
        printf("Digite sua data de Disciplina:\n");
        gets(prof[j].Disciplina);

        for (j = 0; j < 2; j++)
        {
            printf("Digite sua %d turma\t", j + 1);
            scanf("%s", &prof[j].turmas);
        }

        fflush(stdin);
        system("cls||clear");
    }

    // repetição dos alunos
    for (i = 0; i < 3; i++)
    {
        printf("       aluno        \n");
        printf("Digite seu nome: \n");
        gets(aluno[i].nome);
        printf("Digite sua turma: \n");
        gets(aluno[i].ndaturma);
        printf("Digite seu idade: \n");
        gets(aluno[i].idade);

        for (i = 0; i < 2; i++)
        {
            printf("Digite sua %d nota \t", i) + 1;
            scanf("%f", &aluno[i].notas);
        }
    }


for (i = 0; i < 3; i++)
{
    printf("Nome aluno: %s \n", aluno[i].nome);
    printf("numero da turma: %s \n", aluno[i].ndaturma);
    printf("idade: %s \n", aluno[i].idade);
    printf("notas: %.1f \n", aluno[i].notas);
}

for (j = 0; j < 3; j++)
{
    printf("Nome prof: %s \n", prof[j].nome);
    printf("Data de Disciplina: %s \n", prof[j].Disciplina);
    printf("Endereço: %s \n", prof[j].turmas);
}

return 0;
}