#include <stdio.h>

int main()
{
    int idade, soma, quantidade;
    double media;

    printf("Digite as idades:\n");
    scanf("%d", &idade);

    soma=0;
    quantidade=0;
    if (idade<0)
    {
        printf("IMPOSSIVEL CALCULAR");
    }
    else
    {
        while (idade>0)
        {
            soma=soma+idade;
            quantidade=quantidade+1;
            scanf("%d", &idade);
        }
    }
    if (quantidade>0)
    {
        media=(double) soma/quantidade;
        printf("MEDIA = %.2lf", media);
    }
    return 0;
}
