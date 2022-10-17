#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints base 10 digits
 * Return: Always 0 (success)
 *
 * START
 * Initialize int num to 0
 * WHILE - checks if num < 10
 * print num
 * increment num
 * newline
 * STOP
 */
int main(void)
{
int num;

num = 0;
while (num < 10)
{
	printf("%d", num);

	num++;
}
putchar('\n');

return (0);
}
