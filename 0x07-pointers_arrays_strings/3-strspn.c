#include "main.h"

/**
 * _strspn - return number of bytes
 * @s: string
 * @accept: string
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, count;

	for (i = 1; accept[i] != '\0'; i++)
	{
		count++;
	}
	return (count);

}
