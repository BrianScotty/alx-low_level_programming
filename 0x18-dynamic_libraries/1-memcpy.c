#include "main.h"

/**
 *_memcpy - copies bytes from one memory area to another
 *@dest: memory area
 *@src: memory area
 *@n: number of bytes
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
