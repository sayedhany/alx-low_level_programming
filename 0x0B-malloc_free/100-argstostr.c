#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concate arguments
 * @ac: number of arguments
 * @av: pointer to array of string
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	int i, size;
	char *s;

	size = ac - 1;
	s = malloc(sizeof(char *) * size);
	for (i = 0; i < size; i++)
	{
		s[i] = av[i + 1];
	}
	s[i] = '\0';
	return (s);
}
