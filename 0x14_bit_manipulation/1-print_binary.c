#include "main.h"

/**
 * _pow - does exponential calculations
 * @base: base
 * @power: eponent
 * Return: calculated answer
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int x;

	num = 1;
	for (x = 1; x <= power; x++)
		num *= base;
	return (num);
}

/**
 * print_binary - prints binary representation of a number
 * @n: number to print
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int x, y;
	char z;

	z = 0;
	x = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (x != 0)
	{
		y = n & x;
		if (y == x)
		{
			z = 1;
			_putchar('1');
		}
		else if (z == 1 || x == 1)
		{
			_putchar('0');
		}
		x >>= 1;
	}
}
