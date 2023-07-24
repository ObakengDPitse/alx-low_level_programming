#include "main.h"

/**
 * puts2 - prints a charecter then skips one
 * @str: input
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;
	char *p = str;
	int k;

	while (*p != '\0')
	{
		p++;
		i++;

	}
	j = i - 1;
	for (k = 0; k <= j; k++)
	{
		if (k % 2 == 0)
		{
			putchar(str[k]);
		}
	}
	_putchar('\n');
}
