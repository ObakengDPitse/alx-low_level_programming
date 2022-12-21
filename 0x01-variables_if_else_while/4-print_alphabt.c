#include <stdio.h>

/**
 * main - print some alphabets
 *
 * Return: Always 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
		{
			continue;
		}
		else
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
