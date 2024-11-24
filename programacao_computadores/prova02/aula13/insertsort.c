/**
 * Façaa um programa que receba um número de alunos matriculas na
 * disciplina de Prog, e receba também a matricula de cada um dos alunos
 * desta turma. Após utilizando-se do método de ordenação Insertsort liste
 * na tela por ordem das matriculas os alunos desta turma.
 */

#include <stdio.h>

void insertionSort(int arr[], int n)
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

int main()
{
    int n;

    printf("Digite o número de alunos matriculados: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Número inválido de alunos.\n");
        return 1;
    }

    int matriculas[n];

    // Recebendo as matrículas
    printf("Digite as matrículas dos %d alunos:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Matrícula %d: ", i + 1);
        scanf("%d", &matriculas[i]);
    }

    // Ordenação das matrículas
    insertionSort(matriculas, n);

    // Exibindo as matrículas ordenadas
    printf("\nMatrículas ordenadas:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", matriculas[i]);
    }

    return 0;
}
