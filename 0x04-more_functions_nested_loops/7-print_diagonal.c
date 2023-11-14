#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: number of times the line should be printed
 */
void print_diagonal(int n)
{
	char c = '\\';
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (n > 0)
	{
		i = 0;
		while (i < n)
		{
			_putchar(' ');
			i++;
		}
			_putchar(c);
			_putchar('\n');
			i++;
			n--;
	}
	_putchar('\n');
}
