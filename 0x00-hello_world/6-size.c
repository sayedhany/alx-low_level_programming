#include <stdio.h>

/**
  * main - print size of data types
  * Return: return zero
  */
int main(void)
{
	char n1;
	int n2;
	long int n3;
	long long int n4;
	float n5;

	printf("Size of a char: %lu byte(s)\n", sizeof(n1));
	printf("Size of an int: %lu byte(s)\n", sizeof(n2));
	printf("Size of a long int: %lu byte(s)\n", sizeof(n3));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(n4));
	printf("Size of a float: %lu byte(s)\n", sizeof(n5));
	return (0);
}
