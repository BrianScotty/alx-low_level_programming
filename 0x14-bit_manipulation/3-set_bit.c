#include "main.h"

/**
 * set_bit - sets a bit at index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to change
 * Return: 1 ( success), -1 (failure)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
