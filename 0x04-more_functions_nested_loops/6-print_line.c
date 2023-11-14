#include "main.h"

/*
 * print_line - a function that draws a straight line in the terminal.
 * @n: number of times to print line
 */
void print_line(int n)
{
	char i;

	while (i <= n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(95);
		}
		i++;
	}
	_putchar('\n');
}
