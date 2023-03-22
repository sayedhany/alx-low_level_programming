#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - get searched index
 * @array: array
 * @size: size of array
 * @cmp: function
 * Return: number
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
