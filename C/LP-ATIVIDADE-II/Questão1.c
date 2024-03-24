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
        printf("O clima está ensolarado");
    }
    else if (temperatura >= 15)
    {
        printf("O clima hoje estará nublado");
    }
    else
    {
        printf("O clima está chuvoso, é melhor levar um guarda-chuva");
    }

    return 0;
}