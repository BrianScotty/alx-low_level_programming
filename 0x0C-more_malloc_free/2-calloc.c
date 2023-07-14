#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_memset - repeats a byte
 * @s: area
 * @b: byte
 * @n: number input
 * Return: pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: amount of elements in array
 * @size: element size
 * Return: pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}
