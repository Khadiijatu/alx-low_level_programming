#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - computes the sum of all its parameters
 * @n: int, fixed argument
 *
 * Return: sum of all parameters, or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int result;
	unsigned int i;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		result += va_arg(args, int);
	}
	va_end(args);
	return (result);
}
