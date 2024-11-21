/**
<<<<<<< HEAD
 * Faça um programa que crie um arquivo TEXTO em disco, com o nome "dados.txt", e escreva neste
 * arquivo em disco uma contagem que vá de 1 até 100, com um número em cada linha.
=======
 * FaÃ§a um programa que crie um arquivo TEXTO em disco, com o nome "dados.txt", e escreva neste
 * arquivo em disco uma contagem que vÃ¡ de 1 atÃ© 100, com um nÃºmero em cada linha.
>>>>>>> a5f264d32a36aa0a69c73e69205aeb335446c40b
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
<<<<<<< HEAD
        printf("Não foi possível abrir o arquivo. \n ");
=======
        printf("NÃ£o foi possÃ­vel abrir o arquivo. \n ");
>>>>>>> a5f264d32a36aa0a69c73e69205aeb335446c40b
        return 1;
    }

    for (int i = 1; i <= 100; i++)
    {
        fprintf(file, "%d\n", i);
    }

    rewind(file);

<<<<<<< HEAD
    printf("\nConteúdo do arquivo '%s':\n", filename);
=======
    printf("\nConteÃºdo do arquivo '%s':\n", filename);
>>>>>>> a5f264d32a36aa0a69c73e69205aeb335446c40b
    while (fscanf(file, "%d", &numero) != EOF)
    {
        printf("%d\n", numero);
    }

    printf("\n");

    fclose(file);

    return 0;
}
