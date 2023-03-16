#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - ptinr numbers from min to max
 * @min: number
 * @max: number
 * Return: address
 */
int *array_range(int min, int max)
{
	int *str;
	int i;

	if (min > max)
		return (0);
	str = malloc((max - min) * sizeof(int));
	for (i = 0; i < (max - min) && min <= max; i++, min++)
		str[i] = min;
	return (str);
}
