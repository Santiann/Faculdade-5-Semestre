/**
 * Faça um programa que crie um arquivo TEXTO em disco, com o nome "dados.txt", e escreva neste
 * arquivo em disco uma contagem que vá de 1 até 100, com um número em cada linha.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char filename[] = "dados.txt";
    int numero;

    FILE *file = fopen(filename, "w+");

    if (file == NULL)
    {
        printf("Não foi possível abrir o arquivo. \n ");
        return 1;
    }

    for (int i = 1; i <= 100; i++)
    {
        fprintf(file, "%d\n", i);
    }

    rewind(file);

    printf("\nConteúdo do arquivo '%s':\n", filename);
    while (fscanf(file, "%d", &numero) != EOF)
    {
        printf("%d\n", numero);
    }

    printf("\n");

    fclose(file);

    return 0;
}
