#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to array of integers
 * @n: para
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d\n", *a);
		else
			printf("%d, ", *a);
		a++;
	}
}
