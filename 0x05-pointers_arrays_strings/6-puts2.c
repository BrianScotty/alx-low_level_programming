#include "main.h"

/**
 * puts2 - prints every other character of the string
 * @str: string
 * Return: character
 */

void puts2(char *str)
{
	int var = 0;
	int i = 0;
	char *m = str;
	int n;

	while (*m != '\0')
	{
		m++;
		var++;
	}
	i = var - 1;
	for (n = 0 ; n <= i ; n++)
	{
		if (n % 2 == 0)
	{
		_putchar(str[n]);
	}
	}
	_putchar('\n');
}
