#include "variadic_functions.h"

/**
 * print_all - print all
 * @format: list of all forms
 */
void print_all(const char * const format, ...)
{
	int i;
	char *str, *sep = "";

	va_list = list;

	va_Start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", srp, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	pitchar('\n');
	va_end(list);
}
