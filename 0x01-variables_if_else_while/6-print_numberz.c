#include <stdio.h>
/**
  *main - print number base 10
  *Return: return 0 if success
  */
int main(void)
{
	int n;

	for (n = 0; n < 100; n++)
	{
		if (n % 10 == 0)
		{
			printf("%d", n/10);
		}
	}
	printf("\n");
	return (0);
}
