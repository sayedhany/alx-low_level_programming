#include "main.h"

/**
  * _isdigit - check if input is digit or not
  * @c: number to check
  *
  * Return: 1 if digit 0 or not
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

