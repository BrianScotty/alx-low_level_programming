#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to print between strings.
 * @n: amount of strings
 * @...: undefined strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strng;
	char *p;
	unsigned int i;

	va_start(strng, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(strng, char *);
		if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strng);
}
