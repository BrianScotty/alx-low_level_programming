#include "main.h"

/**
 * _memset - fills the memory of an area with a constant byte
 * @s: pointer the memory area
 * @b: constant area filler
 * @n: bytes to be filled
 * Return: s (pointer)
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
