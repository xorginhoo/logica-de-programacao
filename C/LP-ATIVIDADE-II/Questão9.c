#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero; 
    int i; 
    int det = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("Numero nao primo\n");
        return 0;
    }

    for (i = 2; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            det = 1;
            break;
        }
    }

    switch (det) {
        case 0:
            printf("Numero primo\n");
            break;
            default:
            printf("Numero nao primo\n");
            break;
    }
    return 0;
}
