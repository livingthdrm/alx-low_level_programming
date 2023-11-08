#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 *
 * @s: string to print
 */
void print_rev(char *s)
{
	*s = ('\0' - 1);

	while (*s)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
