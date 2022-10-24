#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * START
 * Declare auto int variable n
 * FOR
 * Initialize n to 0
 * n upper limit is less than 10
 * increment n
 * print n
 * print newline
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
		_putchar(n);

	_putchar('\n');
}
