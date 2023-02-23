#include "main.h"

/**
  * print_triangle - print triangle shape
  * @size: number of columns
  */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = i; j < size - 1; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k < i + 1; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
