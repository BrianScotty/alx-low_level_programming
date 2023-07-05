#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string
 */

void _puts_recursion(char *s)
{
	char c;

	c = *s;
	if (c)
	{
		_putchar(c);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
