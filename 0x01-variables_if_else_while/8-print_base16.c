#include <stdio.h>
/**
  *main - print 123456789abcdef
  *Return : return 0 if succes
  */
int main(void)
{
	char n = '0';
	char ch = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
