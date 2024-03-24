#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float media, nota;
    int somaNotas = 0;
    int i;
    int qntNotas = 0;

        printf("Digite a quantidade de notas: \n");
        scanf("%d", &qntNotas);

        for (i = 1; i <= qntNotas; i++) {
            printf("Digite a %d nota: \n", i);
            scanf("%f", &nota);

            somaNotas+=nota;
        }
    
    media = somaNotas / (float)qntNotas;

    printf("Media: %.2f \n", media);

    return 0;
}
