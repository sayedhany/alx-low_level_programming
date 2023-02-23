#include "main.h"

/**
  * more_numbers - print from 0 to 14 ten
  */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 14; j++)
		{
			if (j < 10)
			{
				_putchar((i % 10) + '0');
			}
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
