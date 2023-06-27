#include "main.h"

/**
 * swap_int - swaps two integers value's
 * @a: integer
 * @b: integer
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

