#include "main.h"

/**
 * _strstr - string
 * @haystack: string
 * @needle: string
 * Return: string
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (haystack[j] == needle[i])
			{
				return (&haystack[j]);
			}
			if (haystack[j] == '\0')
				break;
		}
	}
	return (0);
}
