#include "main.h"
/**
  * rev_string - reverse string
  * @s: string which will be reversed
  */

void rev_string(char *s)
{
	char new[];
	int i;
	int j;
	int count;

	count = 0;
	for (j = 0; s[j] != '\n'; j++)
	{
		count++;
	}
	for (i = 0; i < count; i++)
	{
		new[i] = s[count - i - 1];
	}
}
