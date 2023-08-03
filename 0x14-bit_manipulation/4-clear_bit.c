#include "main.h"

/**
 * clear_bit - sets bit value to 0 at an index
 * @n: pointer to the number
 * @index: index input
 * Return: 1 (success), -1 (fail)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);
	x = 1 << index;
	if (*n & x)
		*n ^= x;
	return (1);
}
