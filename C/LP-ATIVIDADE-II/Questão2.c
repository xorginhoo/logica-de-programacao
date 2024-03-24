#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    char dia;
    float desconto;
    float Compra; 
    float valorTotal;

    printf("Digite o valor da compra: \n");
    scanf("%f", &Compra);

    printf("\n1 - Dia de semana. \n");
    printf("2 - Final de semana. \n");
    printf("\nDigite a opção do dia que foi feito a compra: ");
    fflush(stdin);
    scanf("%c", &dia);

    if (Compra > 100) {
        if (dia == '1') {
            desconto = Compra * 0.10; 
            } 
        }
      
      if (Compra > 100) {
         if (dia == '2') {
            desconto = Compra * 0.15; 
            }
    }

    valorTotal = Compra - desconto;    
    system("cls || clear");
    
    printf("Valor da compra: %.2f \n", Compra);
    printf("Desconto: %.2f \n", desconto);
    printf("Valor total com desconto: %.2f \n", valorTotal);

    
    
    return 0;
}