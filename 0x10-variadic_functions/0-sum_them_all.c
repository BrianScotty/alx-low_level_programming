#include "variadic_functions.h"

/**
 * sum_them_all - adds all parameters.
 * @n: number of parameters
 * @...: continuation of parameters
 * Return: sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int x, sum = 0;

	va_start(vl, n);
	for (x = 0; x < n; x++)
		sum += va_arg(vl, int);
	va_end(vl);
	return (sum);
}
