#include "main.h"

/**
 * _islower - check if alphabet is lower
 * @c: charecter input
 * Return: 1 if lower, else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
