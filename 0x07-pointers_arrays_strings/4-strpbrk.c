#include "main.h"

/**
 * _strpbrk - search char
 * @s: string
 * @accept: string
 * Return: string
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[j]);
			}
			break;
		}
		if (accept[j] == '\0')
			break;
	}
	return (0);
}
