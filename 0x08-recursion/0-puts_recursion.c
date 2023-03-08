#include "main.h"

/**
 * _puts_recursion - print string
 * @s: string
 */
void _puts_string(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
		return;
	}
	_putchar(*s);
	_puts_string(s++);
}
