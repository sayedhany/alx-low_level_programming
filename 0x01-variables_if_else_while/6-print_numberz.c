#include <stdio.h>
/**
  *main - print number base 10
  *Return: return 0 if success
  */
int main(void)
{
	int n = '0';	
	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');	
	return (0);
}
