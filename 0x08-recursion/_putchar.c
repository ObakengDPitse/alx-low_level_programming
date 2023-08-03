#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the charecter
 * @c: the charecter to be printed
 *
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
