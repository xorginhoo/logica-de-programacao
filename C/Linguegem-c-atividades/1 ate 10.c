#include <stdio.h>
#include <stdlib.h>

int main()
{
int i;
printf("crescente\n");
for (i = 1; i <= 10 ; i++){
printf("%d \n", i);
}

printf("");
printf("decrescente\n");
for (i = 10; i >= 1 ; i--){
printf("%d \n", i);
}



return 0;
}
