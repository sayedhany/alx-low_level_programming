#include "main.h"

/**
 * flip_bits - flib_bits
 * @n: number
 * @m: number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	int i = 0;

	num = n ^ m;
	while (num >= 1)
	{
		if ((num & 1) == 1)
		i++;
		num = num >> 1;
	}
	return (i);
}
