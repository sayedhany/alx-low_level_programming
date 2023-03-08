#include "main.h"

/**
 * _print_rev_recursion - print reversed string
 * @s: sting
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(++s);
	}
	else
		_putchar(*s);
}
