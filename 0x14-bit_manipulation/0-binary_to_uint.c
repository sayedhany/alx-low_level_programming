#include "main.h"
#include <string.h>
#include <math.h>

/**
 * binary_to_uint - binary_to_uint
 * @b: address
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, i, j;

	for (i = strlen(b) - 1, j = 0; i > 0; i--, j++)
	{
		if (b[i] == 0 || b[i] == 1)
			num += pow(2.0, (double) b[i]);
		return (0);
	}
	return ((unsigned int)num)
}
