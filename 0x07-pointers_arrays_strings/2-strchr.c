#include "main.h"

/**
 * _strchr - check character
 * @s: string of characters
 * @c: char
 * Return: string
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (S);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
