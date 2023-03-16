#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - reserve amount of memory
 * @nmemb: number of things
 * @size: number of bytes
 * Return: address of reverved value
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);
	str = malloc(nmemb * size);
	if (str == NULL)
		return (0);
	for (i = 0; i < (nmemb * size); i++)
		str[i] = 0;
	return (str);
}
