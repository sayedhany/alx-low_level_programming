#include "main.h"

/**
 * _strspn - return number of bytes
 * @s: string
 * @accept: string
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[i] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (count);

}
