#include <stdio.h>
#include <stdlib.h>

/**
 * Faça um programa que receba do usuário o tamanho de uma string e chame uma
 * função para alocar dinamicamente essa string. Em seguida, o usuário deverá informar o
 * conteúdo dessa string.
 * 
 */

int main()
{
    int tamanho;

    printf("Informe o tamanho da string: ");
    scanf("%d", &tamanho);

    char *string = (char *) malloc(tamanho * (sizeof(char)));

    printf("\n Digite o conteudo da string: ");
    scanf(" %[^\n]s", string);
    printf("\n O conteudo digitado é: %s \n", string);

    free(string);
    return 0;
}