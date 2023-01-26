#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints dit numbers of base 10
 * Return: Always 0 (success)
 */

int main(void)
{
	/**
	 * Declare int n
	 * For loop
	 * Initialize n to 0
	 * Set limit to 9
	 * Increment
	 * Print n
	 */

	int n;

	for (n = 0; n <= 9; n++)
		printf("%d", n);
	putchar('\n');
	return (0);
}
