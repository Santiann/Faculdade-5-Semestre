#include <stdio.h>
#include <stdlib.h>

/**
 * Quais s�o as principais fun��es usadas para alocar e liberar mem�ria dinamicamente em C?
 * Liste e explique brevemente as principais fun��es usadas para aloca��o din�mica de mem�ria
 * em linguagem C.
 *
 * Resposta:
 * 
 * As principais fun��es usadas para alocar e liberar mem�ria dinamicamente em C s�o:
 *
 * 1. malloc:
 *    A fun��o malloc aloca um bloco de mem�ria de um tamanho especificado em bytes.
 *    Ela retorna um ponteiro para o in�cio desse bloco, que pode ser usado para armazenar dados de qualquer tipo.
 *    A mem�ria alocada n�o � inicializada, o que significa que pode conter valores "lixo".
 *
 * 2. calloc:
 *    A fun��o calloc � similar ao malloc, mas com duas diferen�as importantes:
 *    ela recebe dois par�metros (n�mero de elementos e tamanho de cada elemento) e inicializa toda a mem�ria
 *    alocada com zeros.
 *
 * 3. realloc:
 *    A fun��o realloc � usada para redimensionar um bloco de mem�ria previamente alocado. Ela permite aumentar
 *    ou diminuir o tamanho de uma �rea de mem�ria apontada por um ponteiro. Se o novo tamanho for maior, a mem�ria
 *    adicional n�o � inicializada.
 *
 * 4. free:
 *    A fun��o free libera a mem�ria previamente alocada usando malloc, calloc ou realloc. Isso � essencial
 *    para evitar vazamentos de mem�ria, j� que a mem�ria alocada permanece dispon�vel at� ser explicitamente liberada.
 */
