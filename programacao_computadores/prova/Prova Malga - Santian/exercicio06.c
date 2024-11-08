#include <stdlib.h>
#include <stdio.h>

int main()
{
    int N;
    int M;
    int i = 0;

    printf("\n Favor, informe o tamanho do array: ");
    scanf("%d", &N);

    int ids[N];

    int *usuarios = (int *)malloc(N * sizeof(int));

    for (i = 0; i < N; i++)
    {
        printf("\n Informe o ID do usuario %d: ", i + 1);
        scanf("%d", &usuarios[i]);
    }

    for (i = 0; i < N; i++)
    {
        printf("\n Usuário %d possui o ID %d", i + 1, usuarios[i]);
    }

    printf("\n Favor, informe o novo tamanho do array: ");
    scanf("%d", &M);

    usuarios = (int *)realloc(usuarios, M * sizeof(int));

    for (i; i < M; i++)
    {
        printf("\n Informe o ID do novo usuario %d:", i + 1);
        scanf("%d", &usuarios[i]);
    }

    for (i = 0; i < M; i++)
    {
        printf("\n Usuário %d possui o ID %d \n", i + 1, usuarios[i]);
    }

    free(usuarios);

    return 0;
}