#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts - prints a string
 *
 * @str: string to be printe
 * Return: void
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	};
	_putchar('\0');
}
