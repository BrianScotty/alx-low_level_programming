#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: input size
 * @c: input char
 * Return: nothing
 */

char *create_array(unsigned int size, char c)
{
	char *ary;
	unsigned int n;

	ary = malloc(size * sizeof(char));
	if (size == 0 || ary == NULL)
		return (NULL);
	for (n = 0; n < size; n++)
		ary[n] = c;
	return (ary);
}
