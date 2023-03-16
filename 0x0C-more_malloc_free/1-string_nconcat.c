#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concate string
 * @s1: string one
 * @s2: string two
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, len1, len2, sum;
	char *str;

	if (s1 == NULL || s1 == NULL)
		len1 = len2 = 0;
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
		sum = len1 + len2;
	else
		sum = len1 + n;
	str = malloc(sum * sizeof(char) + 1);
	if (str == NULL)
		return (0);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (j = 0; j < (sum - len1); j++)
		str[i + j] = s2[j];
	str[i + j] = '\0';
	return (str);

}
