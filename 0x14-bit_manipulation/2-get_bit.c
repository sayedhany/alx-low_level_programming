#include "main.h"

/**
 * get_bit - get bit
 * @n: number
 * @index: index
 * Return: number
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int new = n;

	if (sizeof(new) * 8 < index)
		return (-1);
	new = new >> index;
	if ((new & 1) == 1)
		return (1);
	return (0);

}
