#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: input string
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
