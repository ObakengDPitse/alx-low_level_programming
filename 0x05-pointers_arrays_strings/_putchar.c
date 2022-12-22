#include <unistd.h>

/**
 * _putchar - prints a charecter
 * @c: charecter input
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
