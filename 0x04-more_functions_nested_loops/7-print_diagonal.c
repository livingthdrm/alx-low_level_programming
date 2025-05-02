#include "main.h"

/**
 * print_diagonal - a program that draws a diagonal line on the terminal
 * @n: number of times \ is printed
 */
void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		while (i < n)
		{
			j = 0;

			while (j <= i)
			{
				_putchar(' ');
				j++;
			}
		_putchar(92);
		_putchar('\n');
		i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
