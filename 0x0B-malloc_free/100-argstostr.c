#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program
 * @ac: input integer
 * @av: pointer to a pointer
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i, j, m = 0, n = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			n++;
	}
	n += ac;

	p = malloc(sizeof(char) * n + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		p[m] = av[i][j];
		m++;
	}
	if (p[m] == '\0')
	{
		p[m++] = '\n';
	}
	}
	return (p);
}
