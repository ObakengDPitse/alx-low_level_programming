#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list y;
	unsigned int x;
	int sum = 0;

	va_start(y, n);

	for (x = 0; x < n; x++)
		sum += va_arg(y, int);

	va_end(y);

	return (sum);
}

