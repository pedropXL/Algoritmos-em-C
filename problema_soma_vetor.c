#include <stdio.h>

int main()
{
    int i, n;
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vet[n], soma, media;

    soma=0;
    quantidade=0;
    for (i=0; i<n; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
        soma=soma+vet[i];
    }
    printf("VALORES = ");
    for (i=0; i<n; i++) {
        printf("%.1lf ", vet[i]);
    }
    printf("\nSOMA = %.2lf", soma);
    media=soma/n;
    printf("\nMEDIA = %.2lf", media);

    return 0;
}
