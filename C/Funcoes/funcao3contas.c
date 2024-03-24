#include <stdio.h>

int somar(int n1, int n2)
{
    int resultado;
    resultado = n1 + n2;

    return resultado;
}

int subtrair(int n1, int n2)
{
    int resultado;
    resultado = n1 - n2;

    return resultado;
}

int multiplicar(int n1, int n2) {
    return n1 * n2;
}

float dividir(int n1, int n2) {
    return n1 / (float) n2;
}


int main()
{
    int soma;
    int sub;
    int multi;
    float div;
    int num1;
    int num2;

    printf("Digite o 1 numero:\n");
    scanf("%d", &num1);
   
    printf("Digite o 2 numero:\n");
    scanf("%d", &num2);

    soma = somar(num1, num2);
    sub = subtrair(num1, num2);
    multi = multiplicar(num1, num2);
    div = dividir(num1, num2);

    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", sub);
    printf("multiplicacao: %d\n", multi);
    printf("divisao: %.1f\n", div);

    return 0;
}