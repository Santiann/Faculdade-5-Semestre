/**
 * Faça um programa onde o usuário cadastre um array de números inteiros em ordem
 * aleatória. No programa deve conter um menu que permita ao usuário a escolha de
 * uma busca sequencial ou binária (se o usuário escolher binária use um dos métodos
 * de ordenação para realizar a ordenação para depois realizar a busca).
 * Utilize funções para melhor organizar seu código.
 */

#include <stdio.h>

/**
 * Função para realizar o Selection Sort
 */
void selectionSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        // Troca os elementos
        int temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}

/**
 * Função para busca sequencial
 */
int buscaSequencial(int *arr, int n, int valor)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == valor)
        {
            return i; // Retorna a posição do valor
        }
    }
    return -1; // Valor não encontrado
}

/**
 * Função para busca binária
 */
int buscaBinaria(int *arr, int n, int valor)
{
    int inicio = 0, fim = n - 1;
    while (inicio <= fim)
    {
        int meio = inicio + (fim - inicio) / 2;
        if (arr[meio] == valor)
        {
            return meio;
        }
        if (arr[meio] < valor)
        {
            inicio = meio + 1;
        }
        else
        {
            fim = meio - 1;
        }
    }
    return -1; // Valor não encontrado
}

/**
 * Função para exibir o array
 */
void exibirArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/**
 * Função principal
 */
int main()
{
    int arr[100], n, opcao, valor, resultado;

    printf("Quantos elementos deseja cadastrar? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Digite o número %d: ", i);
        scanf("%d", &arr[i]);
    }

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Busca Sequencial\n");
        printf("2. Busca Binária\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 3)
        {
            printf("Encerrando o programa.\n");
            break;
        }

        printf("Digite o número que deseja buscar: ");
        scanf("%d", &valor);

        if (opcao == 1)
        {
            resultado = buscaSequencial(arr, n, valor);
        }
        else if (opcao == 2)
        {
            selectionSort(arr, n);
            printf("Array ordenado: ");
            exibirArray(arr, n);
            resultado = buscaBinaria(arr, n, valor);
        }
        else
        {
            printf("Opção inválida!\n");
            continue;
        }

        if (resultado != -1)
        {
            printf("Valor encontrado na posição: %d\n", resultado);
        }
        else
        {
            printf("Valor não encontrado.\n");
        }
    }

    return 0;
}
