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

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = i, k = 0; needle[k] != '\0'; j++, k++)
		{
			if (haystack[j] != needle[k] || haystack[j] == '\0')
				break;
		}
		if (needle[k] == '\0')
			return (haystack + i);
	}
	return (NULL);
}
