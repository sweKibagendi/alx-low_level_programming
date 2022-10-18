#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: Programs prints _putchar
 * Return: Always 0 (success)
 *
 * START
 * declare and initialize ch array to _putchar
 * declare and intialize char c to ch
 * WHILE LOOP with condition pointer c
 * print with putchar - incrementing pointer c
 * print newline
 */
int main(void)
{
char ch[] = "_putchar";
char *c = ch;

while (*c)
	putchar(*c++);
putchar('\n');

return (0);
}
