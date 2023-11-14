#include "main.h"

/*
 * print_line - a function that draws a straight line in the terminal
 *
 * @n: number of times to print line
 */
void print_line(int n)
{
	char i = '_';

	while (i <= n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
