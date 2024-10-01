#include <stdio.h>
#include <stdlib.h>

/**
 * Escreva um programa em linguagem C que solicita ao usuário a quantidade de alunos
 * de uma turma, aloque um vetor de notas (números reais). Depois de ler as notas,
 * imprime a média aritmética e apresente a melhor e a pior nota dentre esses alunos.
 *
 */

int main()
{
    int alunos;

    printf("\n Informe a quantidade de alunos: ");
    scanf("%d", &alunos);

    float notas[alunos];
    float maiorNota;
    float menorNota;
    float totalNota = 0.0;

    for (int i = 0; i < alunos; i++)
    {
        printf("\n Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    maiorNota = notas[0];
    menorNota = notas[0];

    for (int i = 0; i < alunos; i++)
    {
        printf("\n O aluno %d tirou a nota %f", i + 1, notas[i]);

        if (notas[i] > maiorNota)
        {
            maiorNota = notas[i];
        }
        
        if (notas[i] < menorNota)
        {
            menorNota = notas[i];
        }

        totalNota = totalNota + notas[i];
    }

    float media = totalNota / alunos;
    
    printf("\n Média total: %f", media);
    printf("\n Maior nota: %f", maiorNota);
    printf("\n Menor nota: %f \n ", menorNota);

}