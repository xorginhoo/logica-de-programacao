#include <stdio.h>

void pareimpar(int num[])
{
    int i = 0;
    int par = 0;
    int impar = 0;
    int pares = 0;
    int impares = 0;

    for (i = 0; i < 6; i++)
    {
        if (num[i] % 2 == 0)
        {
            par++;
            pares++;
        }
        else
        {
            impar++; 
            impares++;
        }
    }
    printf("Numeros pares: %d\n", par);
        printf("Quantidade de pares: %d\n", pares);
            printf("Numeros impares: %d\n", impar);
                printf("Quantidade de impares: %d\n", impares);
}

int main()
{
    int num[6], i = 0;
    for (i = 0; i < 6; i++)
    {
        printf("Digite uma numero:\n ");
        scanf("%d", &num[i]);
    }

    pareimpar(num);

    return 0;
}
