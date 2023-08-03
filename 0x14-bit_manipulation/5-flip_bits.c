#include "main.h"

/**
 * flip_bits - determines amount of bits to flip
 * @n: first number
 * @m: second number
 * Return: amount of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, num = 0;
	unsigned long int y;
	unsigned long int z = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		y = z >> x;
		if (y & 1)
			num++;
	}
	return (num);
}
