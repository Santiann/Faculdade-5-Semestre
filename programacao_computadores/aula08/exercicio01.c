#include <stdio.h>
#include <stdlib.h>

/**
 * Escreva um programa em C que pede ao usuário para inserir o número de linhas
 * e colunas de uma matriz bidimensional. Em seguida, aloque dinamicamente a
 * matriz e peça ao usuário para inserir os elementos da matriz. Finalmente, calcule e
 * imprima a soma de todos os elementos da matriz.
 */

int main()
{
    int qtdLinhas;
    int qtdColunas;
    int **matriz;
    int soma = 0;

    printf("\n Favor insira o número de linhas que deseja: ");
    scanf("%d", &qtdLinhas);

    printf("\n Favor insira a quantidade de colunas que deseja: ");
    scanf("%d", &qtdColunas);

    matriz = (int **)malloc(qtdLinhas * sizeof(int *));

    for (int i = 0; i < qtdLinhas; i++)
    {
        matriz[i] = (int *)malloc(qtdColunas * sizeof(int *));
    }

    for (int i = 0; i < qtdLinhas; i++)
    {
        for (int j = 0; j < qtdColunas; j++)
        {
            printf("Insira o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("\nA soma de todos os elementos da matriz é: %d\n", soma);

    for (int i = 0; i < qtdLinhas; i++)
    {
        free(matriz[i]);
    }

    free(matriz); 

    return 0;
}