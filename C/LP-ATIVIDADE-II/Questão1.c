#include <stdio.h>
#include <locale.h>

int main()
{

    int temperatura;
    setlocale(LC_ALL, "portuguese");

    printf("Digite a temperatura:");
    scanf("%d",&temperatura);

    if (temperatura > 25)
    {
        printf("O clima est� ensolarado");
    }
    else if (temperatura >= 15)
    {
        printf("O clima hoje estar� nublado");
    }
    else
    {
        printf("O clima est� chuvoso, � melhor levar um guarda-chuva");
    }

    return 0;
}