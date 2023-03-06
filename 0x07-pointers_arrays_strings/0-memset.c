#include "main.h"

/**
 * _memset - fill s with n number of b
 * @s: address of s
 * @b: char
 * @n: number of things
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
