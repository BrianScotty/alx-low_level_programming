#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - gives the minimum amount of coins to make change
 * @argc: amount of arguements
 * @argv: array of pointers to arguements
 * Return: 0 (success), or 1 (error)
 */

int main(int argc, char **argv)
{
	int value, x, ans;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	value = atoi(argv[1]);
	ans = 0;
	if (value < 0)
	{
		printf("0\n");
		return (0);
	}
	for (x = 0; x < 5 && value >= 0; x++)
	{
		while (value >= cents[x])
		{
			ans++;
			value -= cents[x];
		}
	}
	printf("%d\n", ans);
	return (0);
}
