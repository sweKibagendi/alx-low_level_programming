#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints alphabets in lowercase
 * Return: Always 0
 */
int main(void)
{
	/**
	 * Declare int ch and declare and initialize space to 10
	 * space to 10rep the char for space in ascii
	 * For loop
	 * Initialize the ch counter to 'a'
	 * Set limit to 'z'
	 * Increment ch
	 * Output char value represented by int ch
	 * Print new line by using space var
	 */
	int ch;
	int space = 10;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar(space);
	return (0);
}
