#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpatela(){
	system("cls||clear");
}

float registro_deposito(float valorinicial, float valordeposito)
{
    return valorinicial + valordeposito;
}

float saque(float valorinicial, float valorsaque)
{
    return valorinicial - valorsaque;
}

struct registro
{
    char titular[200];
    char tipo[200];
    int num;
    float saldo;
    float transferencia;
    float depositado;
};
int main(){

    int opcao;
    float deposito;
    float saque;

    struct registro contabancaria;

    do
    {
        printf("1 | Entrar na minha conta\n");
        printf("2 | Depositar \n");
        printf("3 | Saque\n");
        printf("4 | Sair do programa\n");
       
        printf("\n");
        printf("Selecione a opcao desejada: ");
        scanf("%d", &opcao);
        limpatela();
        fflush(stdin);
        switch (opcao)
        {
        case 1:
            fflush(stdin);

            printf("Nome do titular: ");
            gets(contabancaria.titular);

            printf("Numero da conta: ");
            gets(contabancaria.num);

            printf("Tipo de conta: ");
            gets(contabancaria.tipo);

            printf("Informe o saldo atual: ");
            scanf("%f", &contabancaria.saldo);

            limpatela();

            break;

        case 2:
            printf("Quanto voce deseja depositar: ");
            scanf("%f", &contabancaria.depositado);

            deposito = registro_deposito(contabancaria.saldo, contabancaria.depositado);

            printf("Nome do titular: %s\n", contabancaria.titular);
            printf("Numero da conta: %s\n", contabancaria.num);
            printf("Tipo da conta: %s\n", contabancaria.tipo);
            printf("Saldo pre-deposito: %.2f\n", contabancaria.saldo);
            printf("Saldo atual da conta: %.2f\n\n", deposito);

            break;

        case 3:
            printf("Quanto voce deseja sacar: ");
            scanf("%f", &contabancaria.transferencia);

            saque = saque(contabancaria.saldo, contabancaria.transferencia);

            printf("Titular: %s\n", contabancaria.titular);
            printf("Numero da sua conta: %s\n", contabancaria.num);
            printf("conta %s\n", contabancaria.tipo);
            printf("Saldo anterior: %.2f\n", contabancaria.saldo);
            printf("Saldo atual: %.2f\n\n", saque);

            break;
        case 4:
            printf(".");
            break;
        default:
            break;
        }
    } while (opcao != 4);

    return 0;
}