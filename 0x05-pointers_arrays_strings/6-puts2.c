#include "main.h"

/**
 * puts2 - prints every other string character
 * @str: string to evluate
 */
void puts2(char *str)
{
	while (*str != '0')
	{
		_putchar(*str);
		str++2;
	}
	_putchar('\n');
}
