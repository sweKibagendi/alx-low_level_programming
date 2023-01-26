#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all alphabets except q and e in lowercase
 * Return: Always 0 (success)
 */

int main(void)
{
	/**
	 * Declare ch, initialize space to 10
	 * For loop
	 * Initialize ch to 'a'
	 * Set limit to 'z'
	 * Incement ch
	 * Check if ch is not q or e
	 * Print ch
	 */

	int ch;
	int space = 10;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}
	putchar(space);
	return (0);
}
