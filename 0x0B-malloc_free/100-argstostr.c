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

	if (ac == 0 || av == NULL)
		return (0);
	size = ac - 1;
	s = malloc(sizeof(char *) * size);
	if (s == NULL)
		return (0);
	for (i = 0; i < size; i++)
	{
		s[i] = *av[i];
	}
	s[i] = '\0';
	return (s);
}
