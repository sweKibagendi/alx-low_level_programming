#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints combination of single digits
 * Return: Always 0
 */

int main(void)
{
	/**
	 * Declare n;
	 * For loop
	 * Initialize n to 48
	 * Set limit to 57
	 * Increment
	 * Print n
	 * Print comma
	 * Print space
	 * Print newline
	 */

	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
