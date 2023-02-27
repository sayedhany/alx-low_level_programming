#include <stdio.h>
#include "main.h"

/**
  * print_array - print elements of array
  * @a: array of elements
  * @n: number of elements
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	_putchar('\n');
}
