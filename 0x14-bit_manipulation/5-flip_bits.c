#include "main.h"

/**
 * flip_bits - gives the amount of bits to change
 * @n: first number
 * @m: second number
 * Return: amount of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, y = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		current = exclusive >> x;
		if (current & 1)
			y++;
	}
	return (y);
}
