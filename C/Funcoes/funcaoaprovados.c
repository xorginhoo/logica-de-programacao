#include <stdio.h>

float calcularMedia(float notas[], int tamanho) {
    float soma = 0.0;

    for (int i = 0; i < tamanho; i++) {
        soma += notas[i];
    }

    return soma / tamanho;
}


void verificarAprovacao(float media) {
    if (media >= 7.0) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado.\n");
    }
}

int main() {
    const int numNotas = 3;
    float notas[numNotas];

    
    for (int i = 0; i < numNotas; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    
    float media = calcularMedia(notas, numNotas);

    
    printf("Media: %.2f\n", media);

    
    verificarAprovacao(media);

    return 0;
}
	

