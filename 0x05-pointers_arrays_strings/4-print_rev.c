#include "main.h"

/**
 * print_rev - a function to print a string in reverse
 * @s: the string
 */
void print_rev(char *s)
{
	int i = 0, j;

	while (*(s + i) != '\0')
	{
		i++;
	}

	j = i;

	while (j >= 0)
	{
		_putchar(*(s + j));
		j--;
	}
	_putchar('\n');
}
