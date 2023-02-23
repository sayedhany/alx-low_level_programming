#include "main.h"

/**
  * print_triangle - print
  * @size: number of columns
  */

void print_reiangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - 1; j++)
			{
				_putchar(' ');
			}
			for (k = i - 1; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
