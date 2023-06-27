#include "main.h"

/**
 * puts_half - prints half a string
 * @str: string
 * Return: half of string
 */

void puts_half(char *str)
{
	int m, n, var;

	var = 0;

	for (m = 0; str[m] != '\0'; m++)
		var++;

	n = (var / 2);

	if ((var % 2) == 1)
		n = ((var + 1) / 2);

	for (m = n; str[m] != '\0'; m++)
		_putchar(str[m]);
	_putchar('\n');
}
