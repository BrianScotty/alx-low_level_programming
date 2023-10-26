#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: num 1
 * @m: num 2
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, countbit = 0;
	unsigned long int current;
	unsigned long int excl = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		current = excl >> x;
		if (current & 1)
			countbit++;
	}
	return (countbit);
}
