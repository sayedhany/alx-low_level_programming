#include "main.h"
/**
  * rev_string - reverse string
  * @s: string which will be reversed
  */

void rev_string(char *s)
{
	char new[1000];
	int i;
	int j;

	j = i = 0;
	while (s[i] != '\0')
	{
		new[i] = s[i];
		i++;
	}
	i--;
	while (i >= 0)
	{
		s[i] = new[j];
		j++;
		i--;
	}
	s[j++] = '\0';
}
