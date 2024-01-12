#include "main.h"

/**
 * _strlen - calc the length of a string
 * @s: string
 * Return: string length
 */

int _strlen(char *s)
{
	int strlen = 0;

	while (*s != '\0')
	{
		strlen++;
		s++;
	}
	return (strlen);
}
