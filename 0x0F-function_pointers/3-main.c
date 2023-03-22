#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check calculation
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;
	char *op;
	int (*fun_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	while (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	fun_ptr = get_op_func(op);
	res = fun_ptr(num1, num2);
	printf("%d\n", res);
	return (0);
}
