#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print sum numbers
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(argv[i]))
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
