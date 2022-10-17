#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: ch variable to be looped to print alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
