#include "main.h"

/**
  * _isupper - check if c is upper or not.
  * @c: char which will be checked.
  *
  *Return: return 1 if upper 0 if not.
  */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
