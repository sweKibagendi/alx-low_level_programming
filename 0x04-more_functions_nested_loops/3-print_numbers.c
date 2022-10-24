#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * START
 * Declare auto int variable counter
 * Initialize counter to 0
 * WHILE counter is less than 10
 * THEN print counter
 * increment counter
 * print newline
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
		_putchar(n);

	_putchar('\n');
}
