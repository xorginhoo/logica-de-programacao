#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void tabuada(int n1)  {

    
    int i;

    for ( i = 1; i < 10; i++)
    {
        printf("%d x %d = %d \n",n1,i,n1*i);
    }
    
}

int main() {

    int num;

    printf("digite um numero:");
    scanf("%d",&num);

    tabuada(num);



}
