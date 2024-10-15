#include <stdio.h>

int main()
{
    int i, n, valor;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &n);

    for (i=1; i<=10; i++)
    {
        valor=n*i;
        printf("%d x %d = %d\n", n, i, valor);
    }
    return 0;
}
