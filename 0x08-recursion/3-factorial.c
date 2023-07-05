#include "main.h"

/**
 * factorial - gives the factorial of a number
 * @n: input number for calculation
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
