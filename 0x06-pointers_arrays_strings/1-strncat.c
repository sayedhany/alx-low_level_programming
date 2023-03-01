#include "main.h"
/**
 * _strcat - concat number of strings from src to dest
 * @dest: string
 * @src: string
 * @n: number of strings from src
 * Return: address of concat string
 */
char *_strcat(char *dest, char *src, int n)
{
	char *result;
	char *temp;

	result = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	temp = src;
	while (src - temp < n)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\n';
	return (result);
}
