#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando variáveis
    char codgodeacessosalvo[200] = "senai123";
    char codgodeacesso[200];

    while (1)
    {
        // Solicitando dados para o usuário
        printf("Digite seu códgo de acesso: ");
        gets(codgodeacesso);
        printf("\n");

        // Comparação
        if (strcmp(codgodeacesso, codgodeacessosalvo) == 0)
        {
            printf("Código de acesso correto!\n");
            printf("Seja bem-vindo!\n");
            break;
        }
        else
        {
            printf("Código de acesso incorreto!\n");
            printf("Acesso negado!\n");
            printf("\n");
        }
    }

    return 0;
}
