#include <stdlib.h>
#include <stdio.h>

int main()
{
    int dispositivos = 10;
    float velocidade = 5.00;
    char conexao = 'I';

    int *pontDispositivos = &dispositivos;
    float *pontVelocidade = &velocidade;
    char *pontConexao = &conexao;

    printf("\n Dispositivos: %d", *pontDispositivos);
    printf("\n Velocidade: %f", *pontVelocidade);
    printf("\n Conexao: %c", *pontConexao);

    printf("\n ---Depois da alteração---");

    *pontDispositivos + 5;
    *pontVelocidade * 2;
    *pontConexao = 'A';
    
    printf("\n Dispositivos: %d", *pontDispositivos);
    printf("\n Velocidade: %f", *pontVelocidade);
    printf("\n Conexao: %c \n", *pontConexao);

    return 0;
}