#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void limpatela(){
    fflush(stdin);
    system("cls || clear");

}

void mostraidade(int idade) {

     printf("idade: %d \n", idade);
}


int somar(int num1, int num2)  {

    int resultado;
    resultado = num1 + num2;
    return resultado;
}
 


int main() {

    char nome[200];
    int idade;
    int num1,num2;
    int soma;

    printf("digite seu nome:");
    gets(nome);

    printf("digite sua idade:");
    scanf("%d",&idade);

    printf("digite o primeiro numero:");
    scanf("%d",&num1);

     printf("digite o seguno numero:");
        scanf("%d",&num2);

        soma = somar(num1,num2);


    limpatela();

   // printf("idade: %d \n", idade);
    mostraidade(idade);

     printf("nome: %s \n", nome);

    printf("primeiro numero: %d \n",num1);
    printf("segundo numero: %d \n",num2);
    printf("soma: %d \n",soma);



    return 0;
}
