#include <stdio.h>
#include <stdlib.h>

int busca_sequencial(int vetor[], int tamanho, int chave)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] == chave)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int vetor[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int busca, resultado, chave;

    printf("\n Informe a chave que deseja buscar:");
    scanf("%d", &chave);

    resultado = busca_sequencial(vetor, 10, chave);

    if (resultado != -1)
    {
        printf("\n O valor encontrado foi %d na posição %d \n", chave, resultado);
    }
    else
    {
        printf("\n O valor não foi encontrado \n");
    }

    return 0;
}
