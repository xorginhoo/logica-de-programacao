#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao;
    float valor; 
    float resultado;

    while (1) {
        printf("\nEscolha uma opção de conversão:\n");
        printf("1. Converter quilômetros para milhas\n");
        printf("2. Converter Celsius para Fahrenheit\n");
        printf("0. Sair do programa\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 0:
                printf("Saindo do programa...\n");
                return 0;
                case 1:
                printf("Digite a distância em quilômetros: ");
                scanf("%f", &valor);
                resultado = valor * 0.621371;
                printf("%.2f quilômetros é igual a %.2f milhas.\n", valor, resultado);
                break;
                case 2:
                printf("Digite a temperatura em graus Celsius: ");
                scanf("%f", &valor);
                resultado = (valor * 9 / 5) + 32;
                printf("%.2f graus Celsius é igual a %.2f graus Fahrenheit.\n", valor, resultado);
                break;
                default:
                printf("Opção inválida! Escolha uma opção válida.\n");
                break;
        }
    }
}
