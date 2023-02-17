#include <stdio.h>

/**
  *main - this main func print alphapts
  *Return: return 0 if success
  */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		printf("%c", ch);
		ch++;
	}
	printf("\n");
	return (0);
}
