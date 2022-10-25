#include "main.h"
/**
 * _puts - prints a string to stdout
 *
 * @str: pointer to string
 * START
 * WHILE value at address str is not equal to '\0'
 * THEN
 *	print string at that address
 *	increemnet the address(pointer)
 * print newline
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
