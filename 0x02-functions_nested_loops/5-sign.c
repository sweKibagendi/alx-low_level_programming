#include "main.h"

/**
 * print_sign - prints sign of a number
 *
 * @n: number to be checked for sign
 * Declaration: uses if else else if statement
 * Return: 1, 0 or -1 depending on sign
 *
 * Pseudocode
 * START
 * IF
 * check if n is greater than 1
 * if true; print'+' and return 1
 * ELSE IF:
 * checks if n is equal to zero
 * if true: print '0' and return 0
 * ELSE
 * print '-' and return -1
 * STOP
 */
int print_sign(int n)
{
if (n > 1)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	_putchar('-');
	return (-1);
}
}
