#include "main.h"

/**
 * _isupper - Finds and prints upper case letters
 * @c: alphabetical letter
 * Return: 1 if upper case letter, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
