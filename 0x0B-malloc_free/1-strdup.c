#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated space
 * @str: input string
 * Return: 0 (always)
 */

char *_strdup(char *str)
{
	char *p;
	int m;
	int n = 0;

	if (str == NULL)
		return (NULL);
	m = 0;
	while (str[m] != '\0')
		m++;
	p = malloc(sizeof(char) * (m + 1));
	if (p == NULL)
		return (NULL);
	for (n = 0; str[n]; n++)
		p[n] = str[n];
	return (p);
}
