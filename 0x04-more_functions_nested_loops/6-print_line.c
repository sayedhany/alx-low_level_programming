#include "main.h"

/**
  * print_line - print ----
  * @n: number of prints
  */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('_');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
