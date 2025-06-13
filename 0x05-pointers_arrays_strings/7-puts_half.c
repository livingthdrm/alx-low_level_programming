#include "main.h"

/**
 * puts_half - prints halfof a string
 * @str: the string
 */
void puts_half(char *str)
{
	int len = 0, n;

	while (*(str + len) != '\0')
	{
		len++;
	}

	n = len / 2;

	while (n < len)
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
