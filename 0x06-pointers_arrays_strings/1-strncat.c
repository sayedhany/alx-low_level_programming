#include "main.h"
/**
 * _strncat - concat number of strings from src to dest
 * @dest: string
 * @src: string
 * @n: number of strings from src
 * Return: address of concat string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i;

	len = 0;
	while (*dest != '\0')
	{
		dest++;
		len++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dist[len + i] = '\0';
	return (dest);
	
}
