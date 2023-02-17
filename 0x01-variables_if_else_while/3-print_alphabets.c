#include <stdio.h>

/**
  *main - this main func print alphapts
  *Return: return 0 if success
  */
int main(void)
{
	char ch;
	char ch1;

	ch = 'a';
	while (ch <= 'z')
	{
		printf("%c", ch);
		ch++;
	}
	for (ch1 = 'A'; ch1 <= 'Z'; ch1++)
	{
		printf("%c", ch1);
	}

	printf("\n");
	return (0);
}
