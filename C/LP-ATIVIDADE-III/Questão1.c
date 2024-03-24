#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char nome[5][200];
    int i, idade[5], maiorIdade = 0, menorIdade = 99999;
    float peso[5], alt[5], maiorAlt = 0, menorAlt = 9999, maiorPeso = 0, menorPeso = 999999;

    char nomeMaiorAlt[200];
    char nomeMenorAlt[200];
    char nomeMaiorId[200];
    char nomeMenorId[200];
    char nomeMaiorPeso[200];
    char nomeMenorPeso[200];

    for (i = 0; i < 5; i++)
    {
        fflush(stdin);
        printf("Digite o nome: ");
        gets(nome[i]);
        fflush(stdin);
        printf("Digite a idade: ");
        scanf("%d", &idade[i]);
        fflush(stdin);
        printf("Digite o peso: ");
        scanf("%f", &peso[i]);
        fflush(stdin);
        printf("Digite a altura: ");
        scanf("%f", &alt[i]);
         fflush(stdin);
         
        system("cls||clear");
       
        if (alt[i] > maiorAlt)
        {
            maiorAlt = alt[i];
            strcpy(nomeMaiorAlt, nome[i]);
        }
        if (alt[i] < menorAlt)
        {
            menorAlt = alt[i];
            strcpy(nomeMenorAlt, nome[i]);
        }

        if (idade[i] > maiorIdade)
        {
            maiorIdade = idade[i];
            strcpy(nomeMaiorId, nome[i]);
        }
        if (idade[i] < menorIdade)
        {
            menorIdade = idade[i];
            strcpy(nomeMenorId, nome[i]);
        }

        if (peso[i] > maiorPeso)
        {
            maiorPeso = peso[i];
            strcpy(nomeMaiorPeso, nome[i]);
        }

        if (peso[i] < menorPeso)
        {
            menorPeso = peso[i];
            strcpy(nomeMenorPeso, nome[i]);
        }

        fflush(stdin);
    }

    printf("Quem e mais alto? %s %.1f cm \n", nomeMaiorAlt, maiorAlt);
    printf("Quem e mais baixo? %s %.1f \n", nomeMenorAlt, menorAlt);
    printf("\n");
    printf("Quem tem maior peso? %s %.1f \n", nomeMaiorPeso, maiorPeso);
    printf("Quem tem menor peso? %s %.1f \n", nomeMenorPeso, menorPeso);
    printf("\n");
    printf("Quem e mais velho? %s %d \n", nomeMaiorId, maiorIdade);
    printf("Quem e mais novo? %s %d \n", nomeMenorId, menorIdade);

    return 0;
}