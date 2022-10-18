#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lower case character
 * @c: the character to be checked
 * Description: checks f c is lowercase
 * Return: 1 or 0
 * Pseudocode
 * START
 * IF
 * condition - c>= 97 and c less than or equal to 122
 * return 1
 * ELSE
 * return 0
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
	return (1);
else
	return (0);
}
