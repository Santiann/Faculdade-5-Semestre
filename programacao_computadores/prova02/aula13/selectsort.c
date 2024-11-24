/**
 * Faça um programa em C que solicite ao usuário o número de dados que
 * deseja inserir em um vetor de inteiros.
 * Após a inserção de dados apresente os dados ordenados na tela. Utilize o
 * método SelectSort para realizar a ordenação.
 */

#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        // Encontrar o menor elemento no subarray não ordenado
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Trocar o menor elemento com o primeiro elemento não ordenado
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n;

    // Solicitar o tamanho do vetor
    printf("Digite o número de elementos que deseja inserir no vetor: ");
    scanf("%d", &n);

    int vetor[n];

    // Recebendo os elementos do vetor
    printf("Digite os %d elementos do vetor:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Ordenar os elementos usando Selection Sort
    selectionSort(vetor, n);

    // Exibir o vetor ordenado
    printf("\nVetor ordenado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}
