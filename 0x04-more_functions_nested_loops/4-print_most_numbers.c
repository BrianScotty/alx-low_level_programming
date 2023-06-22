#include "main.h"

/**
 * print_most_numbers - prints 0 to 9 but not 2 and 4
 * return: void
 */

void print_most_numbers(void)
{
	char l;

	for (l = '0'; l <= '9'; l++)
	{
		if (!(l == '2' || l == '4'))
			_putchar(l);
	}
	_putchar('\n');
}
