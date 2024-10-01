#include <stdio.h>
#include <stdlib.h>

/**
 * Qual � a diferen�a entre malloc e calloc? Compare as fun��es malloc e calloc em termos de
 * finalidade, uso e comportamento.
 * 
 * Resposta: 
 * 
 * A fun��o `malloc` aloca dinamicamente um bloco cont�nuo de mem�ria de um tamanho especificado 
 * em bytes. Por exemplo, para alocar espa�o para 5 inteiros, usamos: `malloc(5 * sizeof(int))`. 
 * No entanto, `malloc` n�o inicializa a mem�ria, o que significa que ela conter� valores 
 * indeterminados at� que sejam atribu�dos.
 * 
 * Por outro lado, a fun��o `calloc` tamb�m aloca mem�ria dinamicamente, mas ela inicializa 
 * todos os bytes alocados para zero. Para alocar espa�o para 5 inteiros, usamos: 
 * `calloc(5, sizeof(int))`, onde o primeiro argumento � o n�mero de elementos e o segundo � o 
 * tamanho de cada elemento. Assim, `calloc` garante que a mem�ria alocada comece com todos os 
 * valores zerados.
 * 
 */
