#include "main.h"

/**
 * _memset - Entry
 * @s: printed location
 * @b: wanted value
 * @n: bytes to change
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
