#include "main.h"

/**
 * _strpbrk - searches a string for a set of bets
 * @s: string
 * @accept: string
 * Return: always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
		int x;

		while (*s)
		{
			for (x = 0; accept[x]; x++)
			{
			if (*s == accept[x])
			return (s);
			}
		s++;
		}

	return ('\0');
}
