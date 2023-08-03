#include "main.h"

/**
 * get_bit - returns the value at an index
 * @n: number input
 * @index: index input
 * Return: value at that index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (n == 0 && index < 64)
		return (0);
	for (x = 0; x <= 63; n >>= 1, x++)
	{
		if (index == x)
		{
			return (n & 1);
		}
	}
	return (-1);
}
