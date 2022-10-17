#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints alphabet in lowercase besides q and e
 * Return: Always 0 (success)
 *
 * START
 * declare ch
 * FOR LOOP
 * initialize ch to 97
 * declare upper limit to 122
 * increment ch
 * IF
 * checks if ch is not equal to q or e
 * print ch using putchar
 */
int main(void)
{
char ch;

for (ch = 97; ch <= 122; ch++)
{
if (ch != 113 && ch != 101)
	putchar(ch);
}
putchar('\n');

return (0);
}
