#include "main.h"

/**
  * _islower - return 1 if lower else return 0;
  */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	return (0);
}
