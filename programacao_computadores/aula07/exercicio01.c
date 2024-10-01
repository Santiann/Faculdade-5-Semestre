#include <stdio.h>
#include <stdlib.h>

/**
 * Explique o que � aloca��o din�mica de mem�ria. Descreva o conceito de aloca��o din�mica
 * de mem�ria e explique por que � �til em programa��o.
 * 
 * Reposta:
 * 
 * A aloca��o din�mica de mem�ria permite ao programador reservar uma quantidade espec�fica de mem�ria
 * em tempo de execu��o, ao inv�s de determinar o tamanho previamente, como ocorre na aloca��o est�tica.
 * Isso � �til quando o tamanho dos dados que ser� manipulado n�o � conhecido de antem�o.
 *
 * Com a aloca��o din�mica, � poss�vel criar estruturas de dados flex�veis, como listas ligadas, �rvores e filas,
 * que podem crescer ou diminuir conforme necess�rio. No entanto, � essencial liberar a mem�ria ap�s o uso para
 * evitar problemas como vazamentos de mem�ria e queda de performance. O uso inadequado pode causar erros como
 * fragmenta��o ou sobrecarga de mem�ria, prejudicando o desempenho do sistema.
 */  