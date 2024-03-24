#include <stdio.h>

void convercao(int valorM){
   
    printf("O valor em cm: %d", valorM*100);

    return valorM;
}
int main()
{
    int valorM;

    printf("digite um numero:");
        scanf("%d", &valorM);

        convercao(valorM);

            return 0;
}