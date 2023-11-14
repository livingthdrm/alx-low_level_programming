#include "main.h"

/*
 * print_line - a function that draws a straight line in the terminal
 *
 * @n: number of times to print line
 */
void print_line(int n)
{
	char i = '_';

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (n > 0)
	{
		_putchar(i);
		n--;
	}
	_putchar('\n');
}
