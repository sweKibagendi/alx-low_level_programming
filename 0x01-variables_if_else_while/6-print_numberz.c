#include <stdio.h>

/**
 * main - Entry point
 * Description: prints base 10 digits
 * Return: Always 0 (success)
 *
 * START
 * declare int num
 * initialize num to 0
 * DO
 * print num
 * increment num
 * WHILE - check if num is less 10
 * newline
 */
int main(void)
{
int num;

num = 0;
do {
	putchar(num + '0');
	num++;
} while (num < 10);
putchar('\n');

return (0);
}
