#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers
 * @separator: char sprate numbers
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int value;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(nums, unsigned int);
		if (i == (n - 1))
		{
			printf("%d", value);
			break;
		}
		if (separator == NULL)
			printf("%d", value);
		else
			printf("%d%s", value, separator);
	}
	va_end(nums);
	putchar('\n');
}
