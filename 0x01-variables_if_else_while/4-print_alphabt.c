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
		if (ch == 'e' || ch == 'q')
		{
			ch++;
			continue;
		}
		putchar(ch);
		ch++;
	}
	printf("\n");
	return (0);
}
