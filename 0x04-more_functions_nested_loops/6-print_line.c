#include "main.h"

/**
 * print_line - Prints a straight line
 * @n: input number
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m;

		for (m = 1; m <= n; m++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}

