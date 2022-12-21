#include <stdio.h>

/**
 * main - print base 16 numbers
 *
 * Return: Always 0
 */

int main(void)
{
	char c;

	for (c = 0; c < 16; c++)
	{
		putchar((c % 10) + '0');
	}
	putchar('\n');
	return (0);
}
