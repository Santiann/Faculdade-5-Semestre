#include <stdio.h>
#include <stdlib.h>

int main()
{
    int elementos[7] = {24, 4, 67, -8, 90, 54, 21};
[-=,lp*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------]
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (elementos[j] > elementos[j + 1])
            {
                int temp = elementos[j];
                elementos[j] = elementos[j + 1];
                elementos[j + 1] = temp;
            }
        }
    }

    printf("Array ordenado:\n");
    for (int z = 0; z < n; z++)
    {
        printf("%d ", elementos[z]);
    }
    printf("\n");

    return 0;
}
