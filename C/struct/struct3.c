#include <stdio.h>
struct dados_usuario
{
    char nome[200];
    int idade;
    float notas[2];
};

int main()
{
    struct dados_usuario usuario[3];
    int i;
    int j;

    for (i = 0; i < 3; i++)
    {
        printf("Digite o nome: ");
        gets(usuario[i].nome);
        printf("Digite a idade: ");
        scanf("%f", &usuario[i].idade);

        for (j = 0; j < 2; j++)
        {
            printf("Digite a notas: ");
            scanf("%f", &usuario[i].notas[j]);
        }

        system("cls||clear");
        fflush(stdin);
    }

    for (i = 0; i < 3; i++)
    {
        printf("\nExibindo dados do usuario ... \n ");
        printf("\nNome: %s \n", usuario[i].nome);
        printf("idade: %d \n", usuario[i].idade);
        printf("notas: %.1f e %.1f\t", usuario[i].notas[2]);
    }

    return 0;
}
