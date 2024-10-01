#include <stdio.h>
#include <stdlib.h>

/**
 * Fa�a um programa que realize o cadastro de pre�os de um determinando
 * componente. O programa devera solicitar ao usu�rio o numero de componentes que
 * deseja cadastrar. O programa dever� fazer a reserva de mem�ria dinamicamente
 * considerando que o tipo de dado que ira receber. Ap�s o cadastro mostre na tela o
 * valor de cada componente. ao final n�o esque�a de liberar a mem�ria alocada.
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
        printf("\n Digite o pre�o para o componente %d: ", i + 1);
        scanf("%f", &componentes[i]);
    }

    for (int i = 0; i < quantidade; i++) {
        printf("\n Componente %d: %f \n ", i + 1, componentes[i]);
    }

    free(componentes);

    return 0;
}