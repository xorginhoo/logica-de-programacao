#include <stdio.h>
#include <stdlib.h>

int main()
{
int i;
int n;
int soma;

soma=0;
for (i = 1; i<=5 ; i++){
printf("digite um numero\n");
scanf("%d", &n);
soma+=n;
}

printf("soma: %d", soma);

return 0;
}