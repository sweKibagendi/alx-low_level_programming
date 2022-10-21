#include "main.h"

/**
 * _isupper - Entry point
 *
 * Description: checks for uppercase
 * @c: character to be checked
 * Return: 1 or 0
 *
 * Pseudocode
 * START
 * IF c is >= 65 and c <= 90
 * THEN return 1
 * ELSE return 0
 * END
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
	return (1);
else
	return (0);
}
