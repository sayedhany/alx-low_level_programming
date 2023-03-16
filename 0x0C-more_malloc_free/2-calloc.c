#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _calloc - reserve amount of memory
 * @nmemb: number of things
 * @size: number of bytes
 * Return: address of reverved value
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;
	unsigned int i;

	if (nmemb == NULL || size == NULL)
		return (0);
	str = malloc(nmemb * size);
	if (str == NULL)
		return (0);
	memset(ptr, 0, nmemb * size);
	return (str);
}
