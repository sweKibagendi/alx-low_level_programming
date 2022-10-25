#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: pointer to string
 *
 * START
 * Declare auto int i
 * Initialize i to 0
 * while character at address is not equal to null character
 * THEN
 *	Increment address(pointer)
 *	Increment i
 * WHILE i >= 0
 * THEN
 *	print chracter at the pointers address
 *	decrement address in pointer
 *	decrement i
 * print newline
 */
void print_rev(char *s)
{
	auto int i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (i >= 0)
	{
		_putchar(*s);
		s--;
		i--;
	}
	_putchar('\n');
}
