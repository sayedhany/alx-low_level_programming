#include "main.h"
#include <stdlib.h>

/**
 * len - calculate len of string
 * @str: string
 * Return: length of string
 */
int len(char *str)
{
	int i, len;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
		++len;
	return (len);
}
/**
 * _strdup - copy string
 * @str: string copied
 * Return: address for new string
 */
char *_strdup(char *str)
{
	int length, i;
	char *s;

	if (str == NULL)
		return (0);
	length = len(str);
	s = malloc(length * sizeof(char));
	if (s == NULL)
		return (0);
	for (i = 0; i < length; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
