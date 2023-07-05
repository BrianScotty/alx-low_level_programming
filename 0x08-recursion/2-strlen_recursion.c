#include "main.h"

/**
 * _strlen_recursion - gievs length of a string
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}
