#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - joins two strings
 * @s1: string
 * @s2: string
 * @n: number input
 * Return: pointer to memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int x, y, len_1, len_2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len_1 = 0; s1[len_1] != '\0'; len_1++)
		;
	for (len_2 = 0; s2[len_2] != '\0'; len_2++)
		;
	p = malloc(len_1 + n + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (x = 0; s1[x] != '\0'; x++)
		p[x] = s1[x];
	for (y = 0; y < n; y++)
	{
		p[x] = s2[y];
		x++;
	}
	p[x] = '\0';
	return (p);
}
