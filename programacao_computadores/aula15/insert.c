#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, aux;

    int v[] = {23, 4, 67, -8, 90, 54, 21};
    int TAM = 7;

    for (i = 1; i < TAM; i++)
    {
        aux = v[i];
        j = i - 1;
        while ((j >= 0) && (aux < v[j]))
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = aux;
    }

    printf("Array ordenado: ");
    for (i = 0; i < TAM; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}
