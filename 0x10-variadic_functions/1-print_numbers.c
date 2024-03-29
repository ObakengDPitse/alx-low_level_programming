#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be between numbers.
 * @n: number of integers
 * @...: number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int x;

	va_start(numbers, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(numbers, int));

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numbers);
}
