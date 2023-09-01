#include "main.h"

/**
 * print_binary - changes decimal to binary code
 * @n: input number
 */

void print_binary(unsigned long int n)
{
	int x, y = 0;
	unsigned long int current;

	for (x = 63; x >= 0; x--)
	{
		current = n >> x;

		if (current & 1)
		{
			_putchar('1');
			y++;
		}
		else if (y)
			_putchar('0');
	}
	if (!y)
		_putchar('0');
}
