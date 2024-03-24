#include <stdio.h>

int main()
{
struct dados_usuario {
char nome[200];
int idade;
float peso;
int alt;
char end[500];
};

struct dados_usuario usuario;
printf("Digite o nome: ");
gets(usuario.nome);
printf("Digite a idade: ");
scanf("%d", &usuario.idade);
printf("Digite a peso: ");
scanf("%f", &usuario.peso);
printf("Digite a altura: ");
scanf("%d", &usuario.alt);
printf("Digite o endereco: ");
scanf ("%s", usuario.end);

printf("\nExibindo dados do usuario ... \n ");
printf("\nNome: %s \n", usuario.nome);
printf("Idade: %d \n", usuario.idade);
printf("Peso: %.1f \n", usuario.peso);
printf("Altura: %d cm\n", usuario.alt);
printf("Endereco: %s \n", usuario.end);

    return 0;
}
