#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *p;
	int x, y;

	if (min > max)
		return (NULL);
	y = max - min + 1;
	p = malloc(sizeof(int) * y);
	if (p == NULL)
		return (NULL);
	for (x = 0; min <= max; x++)
		p[x] = min++;
	return (p);
}
