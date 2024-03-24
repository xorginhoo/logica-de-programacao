#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
float soma( float num1,float num2){
  return  (num1 + num2);
}

float subtracao( float num1,float num2){
    return  (num1 - num2); 
}

float divisao( float num1,float num2){

  
    return   (num1 / num2); 
}


float multiplicacao( float num1,float num2){

     return (num1 * num2);   
}



int main() {

    float num1;
    float num2;

    printf("digite o primeiro numero:");
    scanf("%f",&num1);

    printf("digite o seguno numero:");
    scanf("%f",&num2);

    printf("soma:%.2f \n",soma(num1,num2));
    printf("subtracao:%.2f \n",subtracao(num1,num2));
    printf("divisao:%.2f \n",divisao(num1,num2));
    printf("multiplicacao:%.2f \n",multiplicacao(num1,num2));





     



}

