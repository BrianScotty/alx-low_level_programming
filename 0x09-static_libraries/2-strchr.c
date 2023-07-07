#include "main.h"

/**
 * _strchr - returns a pointer with the first address of first C
 * @s: string
 * @c: character
 * Return: always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
