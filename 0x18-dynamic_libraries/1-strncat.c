#include "main.h"

/**
 * _strncat - links two strings and uses n bytes from src string
 * @dest: first string
 * @src: second string
 * @n: integer input
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
	{
	dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
