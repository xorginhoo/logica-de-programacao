#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


void parimpar( int num){

    if (num % 2 == 0)
    {
        printf(" o numero e par");
    }

    else
    {
        printf("o numero e impar");
    }
    
    
}

int main() {

    int num;

    printf("digite um numero:");
    scanf("%d",&num);

     parimpar(num);



}
