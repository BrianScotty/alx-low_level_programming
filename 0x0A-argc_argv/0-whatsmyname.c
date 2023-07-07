#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the progra name
 * @argc: amount of arguements
 * @argv: array of pointers to arguements
 * Return: always 0 (success)
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}

