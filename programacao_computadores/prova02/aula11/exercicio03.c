/**
 * Faça um programa que abra um arquivo de texto e mostre na tela quantos caracteres desse arquivo
 * são vogais.
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // Para usar a função tolower()

int main() {
    char filename[] = "vogais.txt";
    char ch;
    int vogais = 0;

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vogais++;
        }
    }

    fclose(file);

    printf("O arquivo '%s' contém %d vogais.\n", filename, vogais);

    return 0;
}

