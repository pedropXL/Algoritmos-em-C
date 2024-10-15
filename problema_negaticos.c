#include <stdio.h>

int main()
{
    int i, n, vet[10];
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    if (n<=10)
    {
        for (i=0; i<n; i++)
        {
            printf("Digite um numero: ");
            scanf("%d", &vet[i]);
        }
        printf("NUMEROS NEGATIVOS:\n");
        for (i=0; i<=n; i++)
        {
            if (vet[i]<0)
            {
                printf("%d\n", vet[i]);
            }
        }
    }
    return 0;
}
