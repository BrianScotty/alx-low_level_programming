#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 * Return: reversed string
 */

void rev_string(char *s)
{
	char back = s[0];
	int count = 0;
	int i;

	while (s[count] != '\0')
	count++;
	for (i = 0; i < count; i++)
	{
		count--;
		back = s[i];
		s[i] = s[count];
		s[count] = back;
	}
}
