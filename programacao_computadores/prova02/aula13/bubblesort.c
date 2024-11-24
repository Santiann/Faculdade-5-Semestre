/**
 * Faça um programa que solicite ao usuário a quantidade de nomes que deseja
 * armazenar.
 * Após a inserção dos nomes, apresente uma lista em ordem alfabética dos
 * nomes cadastrados.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 100

// Função para trocar dois elementos no array
void swap(char a[], char b[]) {
    char temp[MAX_NAME_LENGTH];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

// Função para ordenar os nomes usando Bubble Sort
void bubbleSort(char names[][MAX_NAME_LENGTH], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                swap(names[j], names[j + 1]);
            }
        }
    }
}

int main() {
    int numNames;

    // Solicitar a quantidade de nomes
    printf("Digite a quantidade de nomes que deseja armazenar: ");
    scanf("%d", &numNames);
    getchar(); // Consumir o caractere de nova linha deixado pelo scanf

    if (numNames <= 0) {
        printf("Quantidade inválida. Encerrando o programa.\n");
        return 1;
    }

    // Alocar memória para os nomes
    char names[numNames][MAX_NAME_LENGTH];

    // Ler os nomes
    for (int i = 0; i < numNames; i++) {
        printf("Digite o nome %d: ", i + 1);
        fgets(names[i], MAX_NAME_LENGTH, stdin);

        // Remover o caractere de nova linha do final da string
        size_t len = strlen(names[i]);
        if (len > 0 && names[i][len - 1] == '\n') {
            names[i][len - 1] = '\0';
        }
    }

    // Ordenar os nomes
    bubbleSort(names, numNames);

    // Exibir os nomes ordenados
    printf("\nLista de nomes em ordem alfabética:\n");
    for (int i = 0; i < numNames; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
