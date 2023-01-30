#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints _putchar
 * Return: Always 0
 */
int main(void)
{
	/**
	 * Declare and initialize array of char
	 * Declare and initialize int i to 0
	 * While loop
	 * while _ putchar at index i is not equal to '\0'
	 * Print char at index i
	 */

	char _putchar[] = "_putchar";
	int i;

	i = 0;
	while (_putchar[i] != '\0')
	{
		putchar(_putchar[i]);
		i++;
	}
	putchar('\n');
	return (0);

}
