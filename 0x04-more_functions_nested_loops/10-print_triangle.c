#include "main.h"

/**
 * print_triangle - a function to print a triangle using #
 * @size: the number of times to print
 */
void print_triangle(int size)
{
	int i = 1, j, k;

	if (size > 0)
	{
		while (i <= size)
		{
			j = size - 1;

			while (j >= i)
			{
				_putchar(' ');
				j--;
			}

			k = 1;

			while (k <= i)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
