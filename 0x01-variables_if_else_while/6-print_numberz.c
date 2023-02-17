#include <stdio.h>
/**
  *main - print number base 10
  *Return: return 0 if success
  */
int main(void)
{
	int i = '0'

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
