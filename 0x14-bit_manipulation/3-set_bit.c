#include "main.h"

/**
 * set_bit - set bit
 * @n: address to number
 * @index: index
 * Return: 1 if success -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	num = 1;
	if (sizeof(n) * 8 < index)
		return (-1);
	num = num << index;
	*n = *n | num;
	return (1);
}
