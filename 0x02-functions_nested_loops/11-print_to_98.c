#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 *
 * Description: prints allnutural numbers from n to 98
 * @n: para
 * START
 * IF n is less than or equal 98
 * THEN
 *	DO
 *	if n != 98
 *		output(n)
 *		output(',')
 *		increment n
 *	ELSE
 *		print(n)
 *	WHILE ( n <= 98)
 *	print newline
 * ELSE
 *	DO
 *	IF n is not equal to 98
 *		Output n
 *		output ,
 *		decrement n;
 *		print newline
 *	ELSE
 *		output n
 *	WHILE n >= 98
 */
void print_to_98(int n)
{
if (n <= 98)
{
	do {
		if (n != 98)
		{
			printf("%d, ", n);
		}
		else
			printf("%d", n);
		n++;
	} while (n <= 98);
	putchar('\n');
}
else
{
	do {
		if (n != 98)
		{
			printf("%d, ", n);
		}
		else
			printf("%d", n);
		n--;
	} while (n >= 98);
	putchar('\n');
}
}
