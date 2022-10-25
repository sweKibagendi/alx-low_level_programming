#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to string
 */
void rev_string(char *s)
{
	auto int i;

	i = 0;
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		i++;
	}
	_putchar('\n');
	while (i >= 0)
	{
		_putchar(*s);
		s--;
		i--;
	}
	_putchar('\n');
}
