#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, j, n, m, a, b;

	i = 0;
	j = 0;
	n = 0;
	m = 0;
	a = 0;
	b = 0;

	while (s[m] != '\0')
		m++;

	while (i < m && a == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			b = s[i] - '0';
			if (j % 2)
				b = -b;
			n = n * 10 + b;
			a = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			a = 0;
		}
		i++;
	}

	if (a == 0)
		return (0);

	return (n);
}
