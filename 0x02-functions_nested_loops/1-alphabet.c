#include "main.c"
/**
  * print_alphabet - prints the english alphabet from a-z.
  * Return: Nothing.
  */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
