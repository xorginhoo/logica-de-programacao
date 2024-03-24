#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

setlocale(LC_ALL, "portuguese");


int codigo;

printf("---------opções-----------.\n");
printf("");

printf(" 1- camisa R$: 29,99. \n");
printf(" 2-  sapatos R$: 59,99. \n");
printf (" 3- calça R$: 39,99. \n");
printf("");
 printf("----------FIM----------. \n");


 printf("escolha um codigo:");
 scanf("%d", &codigo);

 switch (codigo)
 {
 case 1:
    printf(" 1- camisa R$: 29,99");
    break;


    case 2:
    printf(" 2-  sapatos R$: 59,99");
    break;

    case 3:
    printf(" 3- calça R$: 39,99");
    break;

 default:
 printf("invalido");
    break;
 }

 return 0;
}