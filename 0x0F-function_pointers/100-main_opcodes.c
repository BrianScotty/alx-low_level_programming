#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int y, x;
	char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	y = atoi(argv[1]);

	if (y < 0)
	{
		printf("Error\n");
		exit(2);
	}

	p = (char *)main;

	for (x = 0; x < y; x++)
	{
		if (x == y - 1)
		{
			printf("%02hhx\n", p[x]);
			break;
		}
		printf("%02hhx ", p[x]);
	}
	return (0);
}
