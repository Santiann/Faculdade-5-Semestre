#include <stdio.h>
#include <stdlib.h>

/**
 * Qual é a diferença entre malloc e calloc? Compare as funções malloc e calloc em termos de
 * finalidade, uso e comportamento.
 * 
 * Resposta: 
 * 
 * A função `malloc` aloca dinamicamente um bloco contínuo de memória de um tamanho especificado 
 * em bytes. Por exemplo, para alocar espaço para 5 inteiros, usamos: `malloc(5 * sizeof(int))`. 
 * No entanto, `malloc` não inicializa a memória, o que significa que ela conterá valores 
 * indeterminados até que sejam atribuídos.
 * 
 * Por outro lado, a função `calloc` também aloca memória dinamicamente, mas ela inicializa 
 * todos os bytes alocados para zero. Para alocar espaço para 5 inteiros, usamos: 
 * `calloc(5, sizeof(int))`, onde o primeiro argumento é o número de elementos e o segundo é o 
 * tamanho de cada elemento. Assim, `calloc` garante que a memória alocada comece com todos os 
 * valores zerados.
 * 
 */
