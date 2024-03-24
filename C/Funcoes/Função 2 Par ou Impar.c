#include <stdio.h>

void limpatela()
{
    system("cls||clear");
}
void pareimpar(int num, int par, int impar)
{
    if (num % 2 == 0)
    {
        printf("PAR \n ");
    }
    else
    {
        printf("IMPAR\n ");
    }
}

int main()
{

    int par = 0;
    int impar = 0;
    int num;

    printf("Digite uma numero:\n ");
    scanf("%d", &num);
    limpatela();

        pareimpar(num, par, impar);

    return 0;
}