#include <main.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers from 0 to 9
 * @void: input
 *
 * Return: Always 0;
 */
void print_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar ('\n');
	return (0);
}
