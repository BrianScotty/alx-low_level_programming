#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: amount of arguements
 * @argv: array of pointers to arguements
 * Return: always 0 (success)
 */

int main(int argc, char **argv)
{
	int sum = 0;
	char *b;

	while (--argc)
	{
		for (b = argv[argc]; *b; b++)
			if (*b < '0' || *b > '9')
				return (printf("Error\n"), 1);
		sum = sum + atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
