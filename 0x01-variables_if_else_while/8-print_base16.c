#include <stdio.h>

/**
 * main - print base 16 numbers
 *
 * Return: Always 0
 */

int main(void)
{
	char c;

	for (c = 0; c < 10; c++)
	{
		putchar((c % 10) + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
