#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguements it recieved
 * @argc: amount of arguements
 * @argv: array of pointers to string
 * Return: always 0 (success)
 */

int main(int argc, char **argv)
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
