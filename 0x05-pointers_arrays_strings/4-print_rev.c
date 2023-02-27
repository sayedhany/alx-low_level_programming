#include "main.h"

/**
 * print_rev - display reverse string
 * @s: string would reversed
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
