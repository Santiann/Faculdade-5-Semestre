#include <stdio.h>
#include <stdlib.h>

/**
 * Fa�a um programa que receba do usu�rio o tamanho de uma string e chame uma
 * fun��o para alocar dinamicamente essa string. Em seguida, o usu�rio dever� informar o
 * conte�do dessa string.
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
    printf("\n O conteudo digitado �: %s \n", string);

    free(string);
    return 0;
}