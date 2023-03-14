#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concate arguments
 * @ac: number of arguments
 * @av: pointer to array of string
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	int i, j, size;
	char **s;

	if (ac == 0 || av == NULL)
		return (0);
	size = ac - 1;
	s = malloc(sizeof(char *) * size);
	if (s == NULL)
		return (0);
	for (i = 0; i < size; i++)
	{
		s[i] = malloc(sizeof(char) * strlen(av[i]));
		if(s[i] == NULL)
			return (0);
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[i][j] = av[i][j];
		}
		s[i][j] = '\0';

	}
	s[i][j] = '\0';
	return (s);
}
