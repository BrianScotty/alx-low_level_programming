#include "main.h"

/**
 * get_endianness - gives sequence of bytes
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
