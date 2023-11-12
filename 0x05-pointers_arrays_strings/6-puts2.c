#include "main.h"

/**
 * puts2 - prints every other string character
 * @str: string to evluate
 */
void puts2(char *str)
{
	str = 0;

	_putchar(*str);
	while (*str != '\0')
	{
		str += 2;
		_putchar(*str);
	}
	_putchar('\n');
}
