#include <stdio.h>
#include <stdlib.h>

/**
 * O que � um vazamento de mem�ria e como ele pode ser evitado ao usar aloca��o din�mica?
 * Explique o que � um vazamento de mem�ria e discuta boas pr�ticas para evit�-lo ao
 * trabalhar com aloca��o din�mica de mem�ria.
 * 
 * Resposta:
 * 
 * Vazamento de mem�ria ocorre quando alocamos dinamicamente um bloco de mem�ria
 * e, em seguida, perdemos a refer�ncia a ele sem liber�-lo, tornando essa mem�ria
 * inacess�vel para o sistema. Isso acontece, por exemplo, quando alocamos mem�ria
 * dentro de um loop sem liber�-la ap�s seu uso, ou simplesmente esquecemos de chamar
 * a fun��o 'free()' para liberar a mem�ria alocada.
 * 
 * Para evitar vazamentos de mem�ria, devemos sempre liberar a mem�ria ap�s o uso com a
 * fun��o 'free()'. Outras boas pr�ticas incluem evitar perder o ponteiro que aponta para
 * a mem�ria alocada e garantir que, para cada 'malloc()' ou 'calloc()', haja uma chamada
 * correspondente a 'free()'.
 * 
 */
