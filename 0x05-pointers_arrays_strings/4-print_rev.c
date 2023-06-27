#include "main.h"

/**
 * print_rev - prints string backwards
 * @s: string
 * return: always 0 (success)
 */

void print_rev(char *s)
{
	int back = 0;
	int i;

	while (*s != '\0')
	{
		back++;
		s++;
	}
	s--;
	for (i = back; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

