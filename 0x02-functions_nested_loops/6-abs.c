#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @n: input integer
 * Return: absolute value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
