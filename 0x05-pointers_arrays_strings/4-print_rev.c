#include "main.h"

/**
 * print_rev - display reverse string
 * @s: string would reversed
 */
void print_rev(char *s)
{
	int i;
	int j;
	int count;

	count = 0;
	for (j = 0; s[j] != '\0'; j++)
	{
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
