#include <stdio.h>

int main()
{
    int i;
    int num[5];
    int gmaior = 0;
    int gmenor = 9999;
    int par = 0;
    int impar = 0;
    int posi = 0;
    int neg = 0;

    int somaPar = 0;
    int somaNumeros = 0;
    float mediaPar = 0;
    float mediaNumeros = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite um numero:\n ");
        scanf("%d", &num[i]);

        // maior e menor
        gmaior = num[i] > gmaior ? num[i] : gmaior;
        gmenor = num[i] < gmenor ? num[i] : gmenor;

        // par e impar
       if (num[i] % 2 == 0) {
            par++;
            somaPar+=num[i];
        }else{
            impar++;
        } 

        // positivo e negativo
        if (num[i] > 0)
        {
            posi++;
        }
        if (num[i] < 0)
        {
            neg++;
        }

          somaNumeros+=num[i];
    }

    mediaNumeros = somaNumeros / i;

     if (par > 0) {
        mediaPar = somaPar /  par; 
       }

    // dados
    printf("A quantidade de numeros Impares:%d\n", impar);
    printf("quantidade de numeros negativos:%d\n", neg);
    printf("maior e o menor numero:%d e %d\n", gmaior, gmenor);
    

    printf("media de numeros pares:%.1f\n", mediaPar);

    printf("media dos numeros inseridos:%.1f\n", mediaNumeros);
   
}
