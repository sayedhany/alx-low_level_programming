#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_strings - print strings
 * @separator: char sprate strings
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *value;
	va_list strs;

	va_start(strs, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(strs, char *);
		if (!value)
			value = "(nil)";
		if (!separator)
			printf("%s", value);
		else if (separator && i == 0)
			printf("%s", value);
		else
			printf("%s%s", separator, value);
	}
		va_end(strs);
		putchar('\n');
}
