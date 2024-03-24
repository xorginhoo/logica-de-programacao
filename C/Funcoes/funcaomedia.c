#include <stdio.h>
#include <locale.h>

float nota(float num[])
{

    int i;
    float somanotas;
    float media;

    for (i = 0; i < 3; i++)
    {
        printf("digite o %d numero:", i + 1);
        scanf("%f", &num[i]);

        somanotas += num[i];
    }

    media = somanotas / (float)i;

    return media;
}

int main()
{

    float num[3];

    printf("media: %,1f", nota(num));

    return 0;
}