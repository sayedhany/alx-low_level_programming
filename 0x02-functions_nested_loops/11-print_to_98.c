#include "main.h"
/**
  *print_to_98 - print numbers to 98
  *
  */
void print_to_98(int n)
{
	int num;
	
	for (num = n; num <= 98; num++)
	{
		_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
		if (num < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
