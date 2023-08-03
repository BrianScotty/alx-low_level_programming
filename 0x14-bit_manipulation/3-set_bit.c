#include "main.h"

/**
 * set_bit - sets bit value to 1 at an index
 * @n: pointer to number
 * @index: index input
 * Return: 1 (success), -1 (fail)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);
	x = 1 << index;
	*n = (*n | x);
	return (1);
}
