#include <stdio.h>
#include <stdlib.h>

/**
 * Faça um programa que realize o cadastro de preços de um determinando
 * componente. O programa devera solicitar ao usuário o numero de componentes que
 * deseja cadastrar. O programa deverá fazer a reserva de memória dinamicamente
 * considerando que o tipo de dado que ira receber. Após o cadastro mostre na tela o
 * valor de cada componente. ao final não esqueça de liberar a memória alocada.
 * 
 */

int main()
{
    int quantidade;
    float *componentes;

    printf("\n Digite a quantidade de componentes que desejada: ");
    scanf("%d", &quantidade);

    componentes = (float *) malloc(quantidade * (sizeof(float)));

    for (int i = 0; i < quantidade; i++) {
        printf("\n Digite o preço para o componente %d: ", i + 1);
        scanf("%f", &componentes[i]);
    }

    for (int i = 0; i < quantidade; i++) {
        printf("\n Componente %d: %f \n ", i + 1, componentes[i]);
    }

    free(componentes);

    return 0;
}