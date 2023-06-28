#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase letters
 * @a: input
 * Return: a
 */
char *string_toupper(char *a)
{
	int n;

	n = 0;
	while (a[n] != '\0')
	{
		if (a[n] >= 'a' && a[n] <= 'z')
			a[n] = a[n] - 32;
		n++;
	}
	return (a);
}
