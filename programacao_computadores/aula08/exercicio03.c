#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Crie um programa em C para registrar o tempo gasto em tarefas diferentes.
 * O programa deve permitir ao usuário especificar o número de tarefas,
 * inserir nomes de tarefas e o tempo gasto em cada uma. Use alocação dinâmica
 * para armazenar as informações das tarefas e, no final, calcule o tempo
 * total gasto e exiba as tarefas e o tempo gasto em cada uma.
 */
struct tarefa
{
    char nome[50];
    float tempo;
};

int main()
{
    int quantidadeTarefas;
    float tempoTotal;
    printf("Digite a quantidade de tarefas: ");
    scanf("%d", &quantidadeTarefas);

    struct tarefa *tarefa = (struct tarefa *)malloc(quantidadeTarefas * (sizeof(struct tarefa)));

    for (int i = 0; i < quantidadeTarefas; i++)
    {
        printf("Tarefa %d \n", i + 1);
        printf("Digite o nome da tarefa:");
        scanf(" %[^\n]s", tarefa[i].nome);
        printf("Digite o tempo quasto em segundos na tarefas: ");
        scanf("%f", &tarefa[i].tempo);
    }

    for (int j = 0; j < quantidadeTarefas; j++)
    {
        printf("\n Tarefa %s", tarefa[j].nome);
        printf("\n Demorou %f", tarefa[j].tempo);
        tempoTotal = tempoTotal + tarefa[j].tempo;
    }

    printf("\n Tempo total gasto: %f \n", tempoTotal);

    free(tarefa);

    return 0;
}