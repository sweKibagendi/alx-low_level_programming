#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints alphabets in lowercase and uppercase
 * Return: Always 0 (success)
 */

int main(void)
{
	/**
	 * Declare j, k and initialize space to 10
	 * For Loop
	 * Initialize j to 'a'
	 * Set limit to 'z'
	 * Increment j
	 * Print j
	 * For Loop
	 * Initialize k to 'A'
	 * Set limit to 'Z'
	 * Increment k
	 * Print k
	 * Print space
	 * Return 0
	 */

	int j;
	int k;
	int space = 10;

	for (j = 'a'; j <= 'z'; j++)
		putchar(j);
	for (k = 'A'; k <= 'Z'; k++)
		putchar(k);
	putchar(space);
	return (0);
}
