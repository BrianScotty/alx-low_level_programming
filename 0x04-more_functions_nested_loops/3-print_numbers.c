#include "main.h"

/**
 * print_numbers - prints digits 0 to 9
 * Return: 0 (success)
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
