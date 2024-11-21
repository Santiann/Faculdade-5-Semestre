/**
 * Fa�a um programa em linguagem C que receba o t�tulo de um arquivo, abra esse arquivo e utilize a
 * fun��o fscanf para imprimir o conte�do do mesmo.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char filename[100];
    char word[256];

    printf("Digite o nome do arquivo (com extens�o): ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "a+");

    if (file == NULL)
    {
        printf("Não foi poss�vel abrir o arquivo. \n ");
        return 1;
    }

    fprintf(file, "P�o com linguisa\n");

    rewind(file);

    printf("\nConte�do do arquivo '%s':\n", filename);
    while (fscanf(file, "%s", word) != EOF)
    {
        printf("%s ", word);
    }

    printf("\n");

    fclose(file);

    return 0;
}
