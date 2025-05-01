#include "main.h"

/**
 * print_line - a function to print a straight line
 * @n: the number of times to print the line
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	}
	_putchar('\n');
}
