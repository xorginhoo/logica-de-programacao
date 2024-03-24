#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
 int nota;
setlocale(LC_ALL,"portuguese");

 printf("Digite sua nota:");
 scanf("%d",&nota);

 if(nota>=9){
    printf("Excelente!");
 }else if(nota>=7){
    printf("Bom.");
 }else if(nota>=5){
    printf("Razoável");
 }else{
    printf(" Insuficiente.");
 }