#include <stdio.h>
#include <stdlib.h>

void print_opcodes(char *buffer, int num_bytes);

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success, 1 on incorrect number of arguments,
 * 2 on negative number of bytes
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}
	char *buffer = (char *) main;
	print_opcodes(buffer, num_bytes);
	return (0);
}

/**
 * print_opcodes - prints the opcodes of a buffer in hexadecimal format
 * @buffer: the buffer to print opcodes from
 * @num_bytes: the number of bytes of opcodes to print
 */
void print_opcodes(char *buffer, int num_bytes)
{
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx", buffer[i]);
	}

	printf("\n");
}
