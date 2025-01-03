#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of all parameters
 * @n: type integer
 * Return: 0 if n == 0 or sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int i;
	if (n == 0)
	{
		return (0);
	}
	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, int);
	}
	va_end(valist);
	return (sum);
}
