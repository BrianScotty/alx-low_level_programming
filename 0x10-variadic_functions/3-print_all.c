#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: types of arguments
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *p, *sp = "";

	va_list str;

	va_start(str, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sp, va_arg(str, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(str, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(str, double));
					break;
				case 's':
					p = va_arg(str, char *);
					if (!p)
						p = "(nil)";
					printf("%s%s", sp, p);
					break;
				default:
					i++;
					continue;
			}
			sp = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(str);
}
