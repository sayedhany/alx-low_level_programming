#include "main.h"
/**
 * cap_string - capitalize char
 * @s: string
 * Return: string
 */
char *cap_string(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] == 0)
			s[i + 1] -= 32;
	}
	return (s);
}
