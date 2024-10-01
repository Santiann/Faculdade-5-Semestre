#include <stdio.h>
#include <stdlib.h>

/**
 * O que é um vazamento de memória e como ele pode ser evitado ao usar alocação dinâmica?
 * Explique o que é um vazamento de memória e discuta boas práticas para evitá-lo ao
 * trabalhar com alocação dinâmica de memória.
 * 
 * Resposta:
 * 
 * Vazamento de memória ocorre quando alocamos dinamicamente um bloco de memória
 * e, em seguida, perdemos a referência a ele sem liberá-lo, tornando essa memória
 * inacessível para o sistema. Isso acontece, por exemplo, quando alocamos memória
 * dentro de um loop sem liberá-la após seu uso, ou simplesmente esquecemos de chamar
 * a função 'free()' para liberar a memória alocada.
 * 
 * Para evitar vazamentos de memória, devemos sempre liberar a memória após o uso com a
 * função 'free()'. Outras boas práticas incluem evitar perder o ponteiro que aponta para
 * a memória alocada e garantir que, para cada 'malloc()' ou 'calloc()', haja uma chamada
 * correspondente a 'free()'.
 * 
 */
