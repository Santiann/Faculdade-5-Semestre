/**
<<<<<<< HEAD
 * Fa�a um programa em linguagem C que receba o t�tulo de um arquivo, abra esse arquivo e utilize a
 * fun��o fscanf para imprimir o conte�do do mesmo.
=======
 * Faça um programa em linguagem C que receba o título de um arquivo, abra esse arquivo e utilize a
 * função fscanf para imprimir o conteúdo do mesmo.
>>>>>>> a5f264d32a36aa0a69c73e69205aeb335446c40b
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char filename[100];
    char word[256];

<<<<<<< HEAD
    printf("Digite o nome do arquivo (com extens�o): ");
=======
    printf("Digite o nome do arquivo (com extensão): ");
>>>>>>> a5f264d32a36aa0a69c73e69205aeb335446c40b
    scanf("%s", filename);

    FILE *file = fopen(filename, "a+");

    if (file == NULL)
    {
<<<<<<< HEAD
        printf("N�o foi poss�vel abrir o arquivo. \n ");
        return 1;
    }

    fprintf(file, "P�o com linguisa\n");

    rewind(file);

    printf("\nConte�do do arquivo '%s':\n", filename);
=======
        printf("Não foi possível abrir o arquivo. \n ");
        return 1;
    }

    fprintf(file, "Pão com linguisa\n");

    rewind(file);

    printf("\nConteúdo do arquivo '%s':\n", filename);
>>>>>>> a5f264d32a36aa0a69c73e69205aeb335446c40b
    while (fscanf(file, "%s", word) != EOF)
    {
        printf("%s ", word);
    }

    printf("\n");

    fclose(file);

    return 0;
}
