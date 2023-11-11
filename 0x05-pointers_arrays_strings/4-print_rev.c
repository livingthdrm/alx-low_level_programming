#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 *
 * @s: string to print
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		*s += *s;
		s++;
		count++;

		while (*s <= count)
		{
			_putchar(*s);
			s--;
		}
	}
	_putchar('\n');
}
