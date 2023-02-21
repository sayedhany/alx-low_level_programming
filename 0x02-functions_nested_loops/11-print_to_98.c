#include "main.h"
/**
  *print_to_98 - print numbers to 98
  *
  */
void print_to_98(int n)
{
	int num;
	for (num = n; num <= 98; num++)
	{
		putchar((num / 10) + '0');
		putchar((num % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
}
