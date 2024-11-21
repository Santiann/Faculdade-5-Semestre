/**
 * Faça um programa em linguagem C que receba o título de um arquivo, abra esse arquivo e utilize a
 * função fscanf para imprimir o conteúdo do mesmo.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char filename[100];
    char word[256];

    printf("Digite o nome do arquivo (com extensão): ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "a+");

    if (file == NULL)
    {
        printf("NÃ£o foi possível abrir o arquivo. \n ");
        return 1;
    }

    fprintf(file, "Pão com linguisa\n");

    rewind(file);

    printf("\nConteúdo do arquivo '%s':\n", filename);
    while (fscanf(file, "%s", word) != EOF)
    {
        printf("%s ", word);
    }

    printf("\n");

    fclose(file);

    return 0;
}
