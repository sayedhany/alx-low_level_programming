#include "main.h"

/**
 * _strchr -check character
 * @s: string of characters
 * @c: char
 * Return: string
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s++;
			return (s); 
		}
	}
	return (NULL);
}
