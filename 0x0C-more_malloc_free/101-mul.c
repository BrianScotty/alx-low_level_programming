#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _isdigit - determines if input is a digit
 * @c: input
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - gives length of a string
 * @s: string
 * Return: length of the string as a number
 */
int _strlen(char *s)
{
	int x = 0;

	while (*s++)
		x++;
	return (x);
}

/**
 * big_multiply - multiplies the number of two strings
 * @s1: string
 * @s2: string
 * Return: the product
 */
char *big_multiply(char *s1, char *s2)
{
	char *p;
	int l1, l2, i, j, k, l;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	p = malloc(i = l = l1 + l2);

	if (!p)
		printf("Error\n"), exit(98);
	while (i--)
		p[i] = 0;

	for (l1--; l1 >= 0; l1--)
	{
		if (!_isdigit(s1[l1]))
		{
			free(p);
			printf("Error\n"), exit(98);
		}
		i = s1[l1] - '0';
		k = 0;
		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			if (!_isdigit(s2[l2]))
			{
				free(p);
				printf("Error\n"), exit(98);
			}
			j = s2[l2] - '0';
			k += p[l1 + l2 + 1] + (i * j);
			p[l1 + l2 + 1] = k % 10;
			k /= 10;
		}
		if (k)
			p[l1 + l2 + 1] += k;
	}
	return (p);
}

/**
 * main - multiplies the number of two big strings
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	char *p;
	int i, j, l;

	if (argc != 3)
		printf("Error\n"), exit(98);

	l = _strlen(argv[1]) + _strlen(argv[2]);
	p = big_multiply(argv[1], argv[2]);
	j = 0;
	i = 0;
	while (j < l)
	{
		if (p[j])
			i = 1;
		if (i)
			_putchar(p[j] + '0');
		j++;
	}
	if (!i)
		_putchar('0');
	_putchar('\n');
	free(p);
	return (0);
}
