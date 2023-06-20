#include "main.h"
/**
 * _islower - Entry point
 * Description: 'Prints 1 if lowercase letter, otherwise prints 0'
 * @c: ASCII code character
 * Return: 1 for lowercase, 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
