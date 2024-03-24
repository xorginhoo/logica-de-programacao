#include <stdio.h>
#include <stdlib.h>

int main()
{
int i;
int n;
int par;
int impar;
par=0;
impar=0;
for (i = 1; i<=5 ; i++){
printf("digite um numero\n");
scanf("%d", &n);

n % 2 == 0 ? par++ : impar++;

/*if (n%2 == 0){
  par++;
}else{
    impar++;
} */
}

printf("tem quantos pares:%d\n", par);
printf("tem quantos impares:%d \n", impar);
return 0;
}