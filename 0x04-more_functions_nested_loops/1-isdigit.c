#include "main.h"

/**
 * _isdigit - checks for a digit 0 to 9
 * @c: arg to be checked
 * Return: 1 or 0
 *
 * Pseudocode
 * START
 * IF c >= 0 && c <= 9
 * THEN return 1
 * ELSE return 0
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
	return (1);
else
	return (0);
}
