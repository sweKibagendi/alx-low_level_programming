#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints lowercase alphabets in reverse
 * Return: Always 0
 */

int main(void)
{
	/**
	 * Declare int ch
	 * For loop
	 * Initialize ch to 'z'
	 * Set limit to 'a'
	 * Decrement ch
	 * Print ch
	 * Print new line
	 */

	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
