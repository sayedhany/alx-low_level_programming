#include "function_pointer.h"
#include <stdio.h>
/**
 * print_name - print name
 * @name: string
 * @f: function address
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
