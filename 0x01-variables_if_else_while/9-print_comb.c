#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints possible single-digits no.
 * Return: Always 0 (success)
 */
int main(void)
{
auto int n;

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
