#include "main.h"

/**
 * _strlen - gets the length of a string
 * @s: pointer to string
 * Return: length of the string
 */
int _strlen(char *s)
{
	auto int i;

	for (i = 0; s[i] != '\0'; i++)

	i += 1;

	return (i);
}
