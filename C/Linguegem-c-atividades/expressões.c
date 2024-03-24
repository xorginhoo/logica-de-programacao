#include <stdio.h>
#include <stdlib.h>


int main()
{
int i;
printf("sequencia de dois em dois\n");
for (i = 1; i <= 10 ; i+=2){
printf("%d \n", i);
}
printf("\n");

printf("sequencia de multiplicacao\n");
for (i = 1; i <= 10 ; i++){
printf("3x %d= %d \n", i, 3*i);
}

printf("\n");

printf("sequencia de multiplicacao\n");
for (i = 1; i <= 10 ; i++){
printf("5x %d= %d \n", i, 5*i);
}

printf("\n");

printf("sequencia de multiplicacao\n");
for (i = 1; i <= 10 ; i++){
printf("7x %d= %d \n", i, 7*i);
}


return 0;
}