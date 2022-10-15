#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i;
	char *string;
	char *separator;
	va_list args;

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		separator = "";
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
			case 's':
				string = va_arg(args, char *);
				if (!string)
					string = "(nil)";
				printf("%s%s", separator, string);
				break;
		}
		separator = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
