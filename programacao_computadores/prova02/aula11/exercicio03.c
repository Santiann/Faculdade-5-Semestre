/**
<<<<<<< HEAD
 * Fa�a um programa que abra um arquivo de texto e mostre na tela quantos caracteres desse arquivo
 * s�o vogais.
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // Para usar a fun��o tolower()
=======
 * Faça um programa que abra um arquivo de texto e mostre na tela quantos caracteres desse arquivo
 * são vogais.
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // Para usar a função tolower()
>>>>>>> a5f264d32a36aa0a69c73e69205aeb335446c40b

int main() {
    char filename[] = "vogais.txt";
    char ch;
    int vogais = 0;

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
<<<<<<< HEAD
        printf("N�o foi poss�vel abrir o arquivo.\n");
=======
        printf("Não foi possível abrir o arquivo.\n");
>>>>>>> a5f264d32a36aa0a69c73e69205aeb335446c40b
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vogais++;
        }
    }

    fclose(file);

<<<<<<< HEAD
    printf("O arquivo '%s' cont�m %d vogais.\n", filename, vogais);
=======
    printf("O arquivo '%s' contém %d vogais.\n", filename, vogais);
>>>>>>> a5f264d32a36aa0a69c73e69205aeb335446c40b

    return 0;
}

