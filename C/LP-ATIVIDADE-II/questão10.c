#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Crie um programa que solicite ao usuÃ¡rio dois nÃºmeros e uma operaÃ§Ã£o matemÃ¡tica (+, -). Utilize o switch case para realizar a operaÃ§Ã£o desejada e exibir o resultado.
 */

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n1;
    int n2;
    int i;
    int conta;
    int resultado;

    printf("Digite o 1º número: ");
    scanf("%d", &n1);
    printf("Digite o 2º número: ");
    scanf("%d", &n2);

    system("cls|| clear");

    printf("1 PARA SOMAR\n");
    printf("2 PARA SUBTRAIR\n");
    printf("\n");
    printf("ESCOLHA A OPÇÃO DE OPERAÇÃO: ");
    scanf("%d", &conta);

    switch (conta)
    {
    case 1:
        resultado = n1 + n2;
        printf("resultado da soma: %d", resultado);
        break;
    case 2:
        resultado = n1 - n2;
        printf("resultado da subtração: %d", resultado);
        break;

    default:
        printf("Opção inválida. \n");
        break;
    }

    return 0;
}
