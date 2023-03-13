#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concat two strings
 * @s1: string one
 * @s2: string two
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *s;

	if (s1 == NULL)
	{
		len2 = strlen(s2);
		len1 = 0;
	}
	else if (s2 == NULL)
	{
		len1 = strlen(s1);
		len2 = 0;
	}
	else
	{
		len1 = strlen(s1);
		len2 = strlen(s2);
	}
	s = malloc(((len1 + len2) * sizeof(char)) + 1);
	if (s == NULL)
		return (0);
	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (j = 0; j < len2; j++)
		s[i + j] = s2[j];
	s[i + j] = '\0';
	return (s);
}
