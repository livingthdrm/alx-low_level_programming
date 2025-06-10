#include "main.h"

/**
 * puts2 - a function to print every other character in a string
 * @str: the string to print out
 */
void puts2(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		if (len % 2 == 0)
		{
		_putchar(*(str + len));
		}
		len++;
	}
	_putchar('\n');
}
