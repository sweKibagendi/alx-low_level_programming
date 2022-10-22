#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints alphabets in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
auto int ch;

for (ch = 122; ch >= 97; ch--)
	putchar(ch);
putchar('\n');

return (0);
}
