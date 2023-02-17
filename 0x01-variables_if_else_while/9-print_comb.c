#include <stdio.h>
/**main - print numbers
  *Return: return 0 id success
  */
int main(void)
{
	int ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		if(ch != '9')
		{
			putchar(',');
			putchar(' ');
		}
		ch++;			
	}
	putchar('\n');
	return (0);
}
