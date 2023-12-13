#include "main.h"
/**
 * _isalpha - Prints 1 if character is a letter, otherwise prints 0
 *@c: a character in ASCII code
 * Return: 1 if a letter, 0 for the rest
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
