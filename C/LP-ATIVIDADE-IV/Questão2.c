#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpatela(){
	system("cls||clear");
}

float calcularMedia(float numero[])
{
    int i;
    float soma = 0, media;

    for (i = 0; i < 2; i++)
    {
        soma += numero[i];
    }
    return media = soma / 2;
}


char *situacao(float valor)
{
    char situacao[200];

    if (valor >= 7)
    {
        strcpy(situacao, "Aprovado");
    }
    else
    {
        strcpy(situacao, "Reprovado");
    }

    return situacao;
}

struct registro
{
    char DDN[200];
    char nome[200];
    float nota[2];
    float media;
};
int main(){

    int i, j;
    struct registro aluno[5];

    for (i = 0; i < 5; i++)
    {
        printf("Nome do aluno (%d) : ", i + 1);
        gets(aluno[i].nome);
        printf("Data de nascimento: ");
        gets(aluno[i].DDN);

        for (j = 0; j < 2; j++)
        {
            
            
                printf("Digite a %d° nota: ", j + 1);
                scanf("%f", &aluno[i].nota[j]);
                
        }
        fflush(stdin);

        aluno[i].media = calcularMedia(aluno[i].nota);
         printf("\n");
    }


    limpatela();
    for (i = 0; i < 5; i++)
    {
        printf("Nome do aluno (%d): %s\n", i + 1, aluno[i].nome);
        printf("Data de nascimento: %s\n", aluno[i].DDN);
        for (j = 0; j < 2; j++)
        {
            printf("%d° nota: %.2f\n", j + 1, aluno[i].nota[j]);
        }
        printf("Media: %.1f\n", aluno[i].media);
        printf(" %s\n", situacao(aluno[i].media));
        printf("\n");
    }

    return 0;
}
