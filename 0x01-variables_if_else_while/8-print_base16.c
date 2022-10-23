#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints hexadecimal numbers
 * Return: Always 0 (success)
 *
 * START
 * Declare auto in variables n and ch
 * FOR
 *	Initialize n to 48
 *	set n upper limit to be less or equal 57
 *	Increment n
 *	THEN
 *		Output n
 *FOR
 *	Initialize ch to 97
 *	Set upper limit to less or equal 102
 *	Increment ch
 *	THEN
 *		Output ch
 *Output newline
 */
int main(void)
{
auto int n;
auto int ch;

for (n = 48; n <= 57; n++)
	putchar(n);
for (ch = 97; ch <= 102; ch++)
	putchar(ch);
putchar('\n');

return (0);
}
