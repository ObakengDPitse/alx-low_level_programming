#include <stdio.h>

/**
 * main - print base 10 numbers single digits
 *
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
