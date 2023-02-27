#include "main.h"
/**
  * puts_half - print half of string
  * @str: string printed
  */
void puts_half(char *str)
{
	int count;
	int i;
	int j;

	count = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	if (count % 2 != 0)
	{
		for (j = ((count - 1) / 2); j < count; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = count / 2; j < count; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
