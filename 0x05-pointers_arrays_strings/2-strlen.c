#include "main.h"
/**
  * _strlin - give us the number of string
  * @s: input
  * Return: the length of s
  */

int _strlen(char *s)
{
	int i;
	int count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
