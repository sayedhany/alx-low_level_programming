#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array
 * @size: number of array
 * @c: char
 * Return: address of array
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	int i;
	int nsize;

	nsize = size;
	if (size == 0)
		return (0);
	a = malloc(sizeof(char) * nsize);
	if (a == NULL)
		return (0);
	for (i = 0; i < nsize; i++)
	{
		a[i] = c;
	}
	a[i] = '\0';
	return (a);
}
