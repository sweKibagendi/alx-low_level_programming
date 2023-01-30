#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times alphabet in lowercase
 *
 * Pseudocode
 * START
 * declare int i
 * declare int ch
 * initialize i to 0
 * loop with while - condition i lessthan 10
 * initialize ch to 'a'
 * loop with while - condition ch less than 'z'
 * print ch
 * increment ch
 * print newline
 * increment i
 */
void print_alphabet_x10(void)
{
	int i;
	int ch;

	i = 0;
	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
