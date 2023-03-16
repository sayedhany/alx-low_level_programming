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
	str = malloc((max - min + 1) * sizeof(int));
	if (str == NULL)
		return (0);
	for (i = 0; i < (max - min + 1); i++)
		str[i] = min + i;
	return (str);
}
