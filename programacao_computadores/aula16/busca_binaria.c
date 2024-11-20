#include <stdio.h>
#include <stdlib.h>

int buscaBinaria(int *lista, int inicio, int fim, int chave) {
    while (inicio <= fim)
    {
        int meio = inicio + (fim - inicio) / 2;

        if(lista[meio] == chave) {
            return meio;
        } else if (lista[meio] > chave) {
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }
    return -1; // Retorna -1 se a chave não for encontrada
}

int main() {
    int numeros[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int tamanho = 9;
    int chave;

    printf("Favor me informe a chave: ");
    scanf("%d", &chave);

    int resultado = buscaBinaria(numeros, 0, 9, chave);

    if (resultado != -1) {
        printf("\nO valor %d foi encontrado na posição %d.\n", chave, resultado);
    } else {
        printf("\nO valor %d não foi encontrado.\n", chave);
    }

    return 0;
}
