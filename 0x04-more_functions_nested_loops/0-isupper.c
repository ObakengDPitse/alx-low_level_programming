#include "main.h"
#include <stdio.h>

/**
 *  _isupper - checks if a charecter is uppercase
 *  @c: input charecter
 *
 * Return: 1 if is upper else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1)
	}
	else
	{
		return (0);
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
