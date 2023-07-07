#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: amount of arguements
 * @argv: array of pointers to arguements
 * Return: always 0 (success)
 */

int main(int argc, char **argv)
{
	int product;

	if (argc == 3)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
