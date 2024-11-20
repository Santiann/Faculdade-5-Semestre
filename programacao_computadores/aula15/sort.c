#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, j, menor;
    float troca;
    int N = 10;
    float v[] = {9.1, 4.6, 5.7, 8.3, 6.15, 7.3, 5.43, 6.15, 8.75, 6.32};

    for (i = 0; i < N - 1; i++)
    {
        menor = i;
        for (j = i + 1; j < N; j++)
        {
            if (v[j] < v[menor])
            {
                menor = j;
            }
        }

        if (i != menor)
        {
            troca = v[i];
            v[i] = v[menor];
            v[menor] = troca;
        }
    }

    printf("Array ordenado: ");
    for (i = 0; i < N; i++)
    {
        printf("%.2f ", v[i]);
    }
    printf("\n");

    return 0;
}
