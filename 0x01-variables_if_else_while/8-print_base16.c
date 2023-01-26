#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints base 16 characters/digits
 * Return: Always 0
 */

int main(void)
{
	/**
	 * Declare int ch and n
	 * For loop
	 * Initialize ch to 48
	 * Set limit to 57
	 * Increment ch
	 * Print ch
	 * For loop
	 * Initialize n to 'a'
	 * Set limit to 'f'
	 * Increment n
	 */

	int ch;
	int n;

	for (ch = 48; ch <= 57; ch++)
		putchar(ch);
	for (n = 'a'; n <= 'f'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
