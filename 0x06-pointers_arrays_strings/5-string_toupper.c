#include "main.h"
/**
 * string_toupper - change all lower to upper
 * @s: string
 * Return: string
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] -= 32;
		i++;
	}
	return (s);
}
