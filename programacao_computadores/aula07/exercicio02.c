#include <stdio.h>
#include <stdlib.h>

/**
 * Quais são as principais funções usadas para alocar e liberar memória dinamicamente em C?
 * Liste e explique brevemente as principais funções usadas para alocação dinâmica de memória
 * em linguagem C.
 *
 * Resposta:
 * 
 * As principais funções usadas para alocar e liberar memória dinamicamente em C são:
 *
 * 1. malloc:
 *    A função malloc aloca um bloco de memória de um tamanho especificado em bytes.
 *    Ela retorna um ponteiro para o início desse bloco, que pode ser usado para armazenar dados de qualquer tipo.
 *    A memória alocada não é inicializada, o que significa que pode conter valores "lixo".
 *
 * 2. calloc:
 *    A função calloc é similar ao malloc, mas com duas diferenças importantes:
 *    ela recebe dois parâmetros (número de elementos e tamanho de cada elemento) e inicializa toda a memória
 *    alocada com zeros.
 *
 * 3. realloc:
 *    A função realloc é usada para redimensionar um bloco de memória previamente alocado. Ela permite aumentar
 *    ou diminuir o tamanho de uma área de memória apontada por um ponteiro. Se o novo tamanho for maior, a memória
 *    adicional não é inicializada.
 *
 * 4. free:
 *    A função free libera a memória previamente alocada usando malloc, calloc ou realloc. Isso é essencial
 *    para evitar vazamentos de memória, já que a memória alocada permanece disponível até ser explicitamente liberada.
 */
