/**
<<<<<<< HEAD
 * Faça um programa em linguagem C que receba o título de um arquivo, abra esse arquivo e utilize a
 * função fscanf para imprimir o conteúdo do mesmo.
=======
 * FaÃ§a um programa em linguagem C que receba o tÃ­tulo de um arquivo, abra esse arquivo e utilize a
 * funÃ§Ã£o fscanf para imprimir o conteÃºdo do mesmo.
>>>>>>> a5f264d32a36aa0a69c73e69205aeb335446c40b
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char filename[100];
    char word[256];

<<<<<<< HEAD
    printf("Digite o nome do arquivo (com extensão): ");
=======
    printf("Digite o nome do arquivo (com extensÃ£o): ");
>>>>>>> a5f264d32a36aa0a69c73e69205aeb335446c40b
    scanf("%s", filename);

    FILE *file = fopen(filename, "a+");

    if (file == NULL)
    {
<<<<<<< HEAD
        printf("Não foi possível abrir o arquivo. \n ");
        return 1;
    }

    fprintf(file, "Pão com linguisa\n");

    rewind(file);

    printf("\nConteúdo do arquivo '%s':\n", filename);
=======
        printf("NÃ£o foi possÃ­vel abrir o arquivo. \n ");
        return 1;
    }

    fprintf(file, "PÃ£o com linguisa\n");

    rewind(file);

    printf("\nConteÃºdo do arquivo '%s':\n", filename);
>>>>>>> a5f264d32a36aa0a69c73e69205aeb335446c40b
    while (fscanf(file, "%s", word) != EOF)
    {
        printf("%s ", word);
    }

    printf("\n");

    fclose(file);

    return 0;
}
