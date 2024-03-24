#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 200

struct Funcionario {
    char nome[200];
    char cargo[200];
    float salario;
};

float calcularMediaSalarial(struct Funcionario funcionarios[], int numfunci, char cargo[]) {
    float somasalarios;
    int i ;

    for (i = 0; i < numfunci; i++) {
        if (strcmp(funcionarios[i].cargo, cargo) == 0) {
            somasalarios += funcionarios[i].salario;
            i++;
        }
    }

    if (i == 0) {
        return 0;
    }

    return somasalarios / i;
}

int main() {
    struct Funcionario funcionarios[max];
    int numfunci;
    char cargoparametro[200];
    int i;

    printf("Informe a quantidade de funcionarios:\n ");
    scanf("%d", &numfunci);

    for (i = 0; i < numfunci; i++) {
        fflush(stdin);
        printf("Digite o nome do funcionario (%d): ", i + 1);
        gets(funcionarios[i].nome);
        fflush(stdin);
        printf("\n Digite o cargo do funcionario (%d): ", i + 1);
        scanf("%s", funcionarios[i].cargo);
        printf("\n Digite o salario do funcionario (%d): ", i + 1);
        scanf("%f", &funcionarios[i].salario);
        fflush(stdin);
        printf("\n\n");
    }

    printf("\n Digite o cargo para calcular a media salarial: ");
    gets(cargoparametro);

    float mediaSalarial = calcularMediaSalarial(funcionarios, numfunci, cargoparametro);

    printf("\n A media salarial do %s e : %.2f",  cargoparametro, mediaSalarial);

    return 0;
}   
