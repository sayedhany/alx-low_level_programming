#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sum sumbers
 * @n: number
 * Return: sum of numbers
 */
int sum_them_all(unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum, value;

	if (n == 0)
		return (0);
	va_start(list, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		value = va_arg(list, unsigned int);
		sum += value;
	}
	return (sum);
}
