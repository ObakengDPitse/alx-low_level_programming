#include <unistd.h>

/**
 * _putchar - prints a charecter 
 * @c: the printed charecter
 *
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
