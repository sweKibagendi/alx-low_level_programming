#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: ch var to hold int value of char
 * Return: Always 0 (success)
 */
int main(void)
{
/**
 * START
 * Declare ch variable
 * FOR LOOP
 * initialize ch to 97
 * Declare upper ch limit to 122
 * Increment ch
 * print ch with putchar
 * FOR LOOP
 * initialize ch to 65
 * Declare upper ch limit to  90
 * Increment ch
 * print ch with putchar
 * empty line with putchar
 * STOP
 */
	int ch;

	for (ch = 97; ch <= 122; ch++)
		putchar(ch);

	for (ch = 65; ch <= 90; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
