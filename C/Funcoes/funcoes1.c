#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

float dividir(float num1, float num2)  {

    float resultado;
    resultado = (num1 + num2) / 2 ;
    
    return resultado;


}

void limpatela() {

    system("cls || clear");
}


int main()  {
 float num1,num2;
    float media;

    

     printf("digite o primeiro numero:");
    scanf("%f",&num1);

     printf("digite o seguno numero:");
        scanf("%f",&num2);

        media = dividir(num1,num2);
        

         limpatela();

        printf("primeiro numero: %f \n",num1);
        printf("segundo numero: %f \n",num2);
        printf("media: %f \n",media);


        return 0;




}
