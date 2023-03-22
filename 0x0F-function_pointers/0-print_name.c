#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print name
 * @name: string
 * @f: function address
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
