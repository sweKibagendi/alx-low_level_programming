#include "main.h"

/**
 * _isalpha - checks for lowercase or uppercase
 * @c: char to be checked
 * Description: checks if c is lowercase or upper case using IF
 * Return: 1 or 0
 *
 * Pseudocode
 * START
 * IF c is greater or equal to 97 and less 123 or c >= 65 and c <=90
 * THEN
 *	return 1
 * ELSE
 *	return 0
 */
int _isalpha(int c)
{
if ((c >= 97 && c < 123) || (c >= 65 && c <= 90))
	return (1);
else
	return (0);
}
