#include <stdio.h>
struct dados_usuario {
char nome[200];
char categoria[200];
char autor[500];
float notas;
};

int main()
{
struct dados_usuario usuario[3];
int i;

for (i = 0; i < 3; i++)
{
printf("Digite o nome: ");
gets(usuario[i].nome);

printf("Digite a categoria: ");
scanf ("%s",usuario[i].categoria);

printf("Digite o autor: ");
scanf ("%s", usuario[i].autor);

printf("Digite a preco: ");
scanf("%f", &usuario[i].notas);

system("cls||clear");
fflush(stdin);
}

for (i = 0; i < 3; i++)
{
printf("\nExibindo dados do usuario ... \n ");
printf("\nNome: %s \n", usuario[i].nome);
printf("Autor: %s \t", usuario[i].autor);
printf("Categoria: %s \t", usuario[i].categoria);
printf("Preco: %.1f \tg", usuario[i].notas);
}

    return 0;
}
