#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @s: string variable
 * Return: encoded string
 */

char *rot13(char *s)
{
	int m;
	int n;
	char i[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char j[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; n < 52; n++)
		{
			if (s[m] == i[n])
			{
				s[m] = j[n];
				break;
			}
		}
	}
	return (s);
}
