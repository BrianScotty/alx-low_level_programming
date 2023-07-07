#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - gives the number of arguements
 * @argc: amount of arguements
 * @argv: array of pointers to arguements
 * Return: always 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
