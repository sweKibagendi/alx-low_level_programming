#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Description: prints every minute of the day of Jack Bauer,
 *
 * START
 * Declare auto int variable h, m
 * Initialize h to 0
 * WHILE h is less 24
 * THEN
 *	Initialize m to 0
 *	WHILE m is less 60
 *		IF h is less 10
 *			print ('0')
 *			print (h)
 *		ELSE
 *			print (h)
 *		print(':')
 *		IF m is less 10
 *			print('0')
 *			print(m)
 *		ELSE
 *			print (m)
 *		increment m
 * increment h
 */
void jack_bauer(void)
{
auto int h;
auto int m;

h = 0;
while (h < 24)
{
	m = 0;
while (m < 60)
{
	if (h < 10)
	{
		_putchar('0');
		_putchar(h);
	}
	else
		_putchar(h);
	_putchar(':');
	if (m < 10)
	{
		_putchar('0');
		_putchar(m);
	}
	else
		_putchar(m);
	m++;
}
	h++;
}
}
