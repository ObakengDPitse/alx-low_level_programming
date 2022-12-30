#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @a: input number
 * Return: last digit
 */

int print_last_digit(int a)
{
	int dig = n % 10;

	if (dig < 0)
		dig *= -1;

	_putchar(dig + '0');

	return (0);
}
