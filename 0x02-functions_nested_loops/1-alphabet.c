#include "main.h"
/**
  *main - print alphapet lowercase
  *Return: return 0 if success
  */
void print_alphabet()
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\z');
}
int main(void)
{
	print_alphabet();
	return (0);
}
