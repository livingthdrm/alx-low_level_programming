#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 *
 * @s: string to print
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;

		while (*s < '\0')
		{
			_putchar(*s);
			s--;
		}
	}
	_putchar('\n');
}
