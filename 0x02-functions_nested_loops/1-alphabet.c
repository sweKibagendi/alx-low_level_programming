#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - writes lowercase alhabets to stdout
 *
 * PSEUDOCODE
 * START
 * declare and initiliaze ch to 97
 * loop using DO
 * print ch
 * increment ch
 * check condition with while - ch < 122
 */
void print_alphabet(void)
{
auto int ch = 97;

do {
	_putchar(ch);
	ch++;
} while (ch < 122);
_putchar('\n');
}
