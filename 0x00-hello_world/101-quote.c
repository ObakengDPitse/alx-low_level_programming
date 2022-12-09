#include <stdio.h>
#include <unistd.h>

/**
 * main - Printing a quote
 *
 * Return: 1
 */

int main(void)/*printing a quote*/
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
