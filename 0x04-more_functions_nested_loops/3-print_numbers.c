#include <main.h>
#include <stdio.h>

/*
 * print_numbers - prints numbers from 0 to 9
 * @void: input
 *
 * Return: Always 0;
 */
void print_numbers(void)
{
	int x = 0;

	while (x < 10)
	{
		_putchar("%d", x);
		x++;
	}
}
