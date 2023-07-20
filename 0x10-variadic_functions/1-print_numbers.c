#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: string to print between numbers.
 * @n: amount of numbers
 * @...: continuations of numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbs;
	unsigned int i;

	va_start(numbs, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbs, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbs);
}
