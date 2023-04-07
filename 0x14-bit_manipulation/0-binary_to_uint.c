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
	unsigned int num, curr;
	int len;

	num = 0;
	curr = 1;

	if (b == NULL)
		return (0);

	for (len = strlen(b) - 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		num += (b[len] - '0') * curr;
		curr *= 2;
	}
	return (num);
}
