#include <stdio.h>

/**
  * main - print fizz if 3 buzz if 5 fizzbuzz if both
  *
  * Return: 0 if success
  */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	_putchar('\n');
	return (0);
}
