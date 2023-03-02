#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: string
 * @s2: string
 * Return: 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	int len1, len2;
	int i, j, k;

	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (j = 0; s2[j] != '\0'; j++)
		len2++;
	if (len1 != len2)
	{
		return (0);
	}
	else
	{
		for (k = 0; k < len1; k++)
		{
			if (s1[k] == s2[k])
				continue;
			else
				return (s2[k] - s1[k]);
		}
		return (0)
	}
}
