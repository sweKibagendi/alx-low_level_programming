#include "main.h"

/**
 * swap_int - swaps values of integer
 * @a: point to int
 * @b: pointer to int
 *
 * START
 * Declare auto int variable n
 * Initialize n to value in  address held by a
 * Assign value of address held by b to a
 * Assign n to b
 */
void swap_int(int *a, int *b)
{
	auto int n;

	n = *a;
	*a = *b;
	*b = n;
}
