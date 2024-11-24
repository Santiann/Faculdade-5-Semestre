/**
 * Elaborar um programa em C que faça a carga de um vetor com 8 posições de valores
 * inteiros e positivos. Elabore um menu que permitir escolher um dos métodos de
 * ordenação de dados (1-insert sort, 2-bubble sort, 3-quick sort, 4-select sort).
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

void insertSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while ((j >= 0) && (key < arr[j]))
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void bubbleSort(int *arr, int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void quickSort(int *arr, int low, int high)
{
    if (low < high)
    {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++)
        {
            if (arr[j] < pivot)
            {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        int pi = i + 1;
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void selectSort(int *arr, int n)
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
        int temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}

// Função para imprimir o vetor
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Função principal
int main()
{
    int arr[SIZE];
    int choice;

    printf("Digite 8 números inteiros e positivos:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nEscolha o método de ordenação:\n");
    printf("1 - Insert Sort\n");
    printf("2 - Bubble Sort\n");
    printf("3 - Quick Sort\n");
    printf("4 - Select Sort\n");
    printf("Opção: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        insertSort(arr, SIZE);
        printf("\nVetor ordenado com Insert Sort:\n");
        break;
    case 2:
        bubbleSort(arr, SIZE);
        printf("\nVetor ordenado com Bubble Sort:\n");
        break;
    case 3:
        quickSort(arr, 0, SIZE - 1);
        printf("\nVetor ordenado com Quick Sort:\n");
        break;
    case 4:
        selectSort(arr, SIZE);
        printf("\nVetor ordenado com Select Sort:\n");
        break;
    default:
        printf("\nOpção inválida.\n");
        return 1;
    }

    printArray(arr, SIZE);
    return 0;
}
