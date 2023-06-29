#include "main.h"

/**
 * rev_string - reverse string
 * @n: integer input
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char m;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		m = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = m;
	}
}

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @size_r: size of buffer
 * @r: buffer pointer
 * Return: r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int h = 0, i = 0, j = 0, k = 0;
	int l = 0, m = 0, o = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || h == 1)
	{
		if (i < 0)
			l = 0;
		else
			l = *(n1 + i) - '0';
		if (j < 0)
			m = 0;
		else
			m = *(n2 + j) - '0';
		o = l + m + h;
		if (o >= 10)
			h = 1;
		else
			h = 0;
		if (k >= (size_r - 1))
			return (0);
		*(r + k) = (o % 10) + '0';
		k++;
		j--;
		i--;
	}
	if (k == size_r)
		return (0);
	*(r + k) = '\0';
	rev_string(r);
	return (r);
}
